{

  TFile* f = new TFile("DirectDetection/graph_SI.root");

  TGraph* Lmono = (TGraph*)f->Get("Monojet");
   
  TCanvas* C = new TCanvas("C", "C", 640, 640);
  C->cd();
  TString labelX = "M_{#chi} (GeV)";
  //TString labelY = "#sigma_{N-#chi} (cm^{2})";
  TString labelY = "#chi-Nucleon Cross Section (cm^{2})";
  
  TPad *pad1 = new TPad("pad1","pad1",.0,0.,1,1);
  pad1->SetLeftMargin(0.12);
  pad1->SetRightMargin(0.04);
  pad1->Draw();
  pad1->cd();

 
  
  
  f = new TFile("DirectDetection/graph_SI.root");
  TGraph* xenon100 = (TGraph*)f->Get("xenon100");
  TGraph* simple2012 = (TGraph*)f->Get("simple2012");
  TGraph* coupp2012 = (TGraph*)f->Get("coupp2012");
  TGraph* superCDMS = (TGraph*)f->Get("superCDMS");
  TGraph* cdmsII = (TGraph*)f->Get("cdmsII");
  TGraph* lux2013 = (TGraph*)f->Get("lux2013");
  
  TFile* f1 = new TFile("SI_Graphs.root");
  TGraph* RSI = (TGraph*)f1->Get("RazorDM_SI_8TeV_Combined_Toys");
  
  Lmono->SetLineColor(kBlue-8);
  Lmono->SetLineWidth(3);
  Lmono->SetLineStyle(2);
  
  RSI->SetTitle("");
  RSI->SetLineColor(kRed);
  RSI->SetLineWidth(3);
  RSI->SetLineStyle(1);
  
  xenon100->SetLineColor(kAzure+7);
  xenon100->SetLineWidth(4);
  xenon100->SetLineStyle(3);
  
  coupp2012->SetLineColor(kBlue);
  coupp2012->SetLineWidth(3);
  coupp2012->SetLineStyle(6);
  
  simple2012->SetLineColor(kGray+1);
  simple2012->SetLineWidth(3);
  simple2012->SetLineStyle(1);
  
  superCDMS->SetLineColor(kViolet-2);
  superCDMS->SetLineWidth(3);
  superCDMS->SetLineStyle(6);

  cdmsII->SetLineColor(kOrange+6);
  cdmsII->SetLineWidth(3);
  cdmsII->SetLineStyle(1);
  
  lux2013->SetLineColor(kGreen+2);
  lux2013->SetLineWidth(3);
  lux2013->SetLineStyle(1);
  

  Lmono->SetTitle("");
  Lmono->Draw("AL");
  Lmono->GetYaxis()->SetRangeUser(1.0e-46, 1e-36);
  Lmono->GetXaxis()->SetRangeUser(10.1, 1000.);
  Lmono->GetXaxis()->SetTitle(labelX);
  Lmono->GetYaxis()->SetTitle(labelY);
  Lmono->GetXaxis()->SetTitleOffset(1.1);
  Lmono->GetYaxis()->SetTitleOffset(1.7);
  pad1->Update();
  
  TMultiGraph *mg = new TMultiGraph();
  
  mg->Add(RSI,"L");
  mg->Add(lux2013,"L");
  
  mg->Add(xenon100,"L");
  mg->Add(simple2012,"L");
  mg->Add(superCDMS,"L");
  mg->Add(coupp2012,"L");
  mg->Add(cdmsII, "L");
  mg->Draw("L");
  
  TLatex *   tex = new TLatex(0.5,0.93,"CMS Preliminary   #sqrt{s} = 8 TeV   L = 18.84 fb^{ -1}");
  tex->SetNDC();
  tex->SetTextAlign(22);
  tex->SetTextSize(0.03);
  tex->SetLineWidth(2);
  tex->Draw();

  TLatex* tex2 = new TLatex(0.75,0.15,"Vector: #frac{(#bar{#chi}#gamma_{#mu}#chi) (#bar{q}#gamma^{#mu}q)}{#Lambda^{2}}");
  tex2->SetNDC();
  tex2->SetTextFont(42);
  tex2->SetTextColor(kPink+4);
  tex2->SetTextAlign(22);
  tex2->SetTextSize(0.03);
  tex2->SetLineWidth(0.001);
  tex2->Draw();

  TLatex* tex1 = new TLatex(0.25,0.15,"Spin Independent");
  tex1->SetNDC();
  tex1->SetTextFont(42);
  tex1->SetTextAlign(22);
  tex1->SetTextSize(0.03);
  tex1->SetLineWidth(0.001);
  tex1->Draw();

  TLegend* leg = new TLegend(0.6, 0.65, 0.83, 0.89);//(xmin, ymin, xmax, ymax)
  leg->AddEntry(RSI, "CMS RazorDM (18.84 fb^{-1})" ,"l");
  leg->AddEntry(Lmono, "CMS Monojet (19.7 fb^{-1})" ,"l");
  leg->AddEntry(xenon100, "XENON 100" ,"l");
  leg->AddEntry(simple2012, "SIMPLE 2012" ,"l");
  leg->AddEntry(coupp2012, "COUPP 2012" ,"l");
  leg->AddEntry(superCDMS, "superCDMS" ,"l");
  leg->AddEntry(cdmsII, "CDMSII" ,"l");
  leg->AddEntry(lux2013, "LUX 2013" ,"l");
  
  leg->SetFillColor(0);
  leg->SetBorderSize(0);
  leg->SetTextSize(0.03);
  leg->SetTextSize(.022);
  leg->SetFillColor(0);
  leg->Draw();

  pad1->SetLogy();
  pad1->SetLogx();
  pad1->Update();
  C->SaveAs("SI_TOYS_FINAL_Jan2015.pdf");
  C->SaveAs("SI_TOYS_FINAL_Jan2015.png");
  C->SaveAs("SI_TOYS_FINAL_Jan2015.C");

}
