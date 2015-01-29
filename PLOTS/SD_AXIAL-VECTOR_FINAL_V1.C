{
//=========Macro generated from canvas: C/C
//=========  (Thu Jan 29 10:31:20 2015) by ROOT version5.34/11
   TCanvas *C = new TCanvas("C", "C",2083,22,640,642);
   C->Range(0,0,1,1);
   C->SetFillColor(0);
   C->SetBorderMode(0);
   C->SetBorderSize(2);
   C->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0,1,1);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-0.5834004,-46.79141,3.093383,-31.77301);
   pad1->SetFillColor(0);
   pad1->SetBorderMode(0);
   pad1->SetBorderSize(2);
   pad1->SetLogx();
   pad1->SetLogy();
   pad1->SetLeftMargin(0.1462264);
   pad1->SetRightMargin(0.01415094);
   pad1->SetTopMargin(0.08169935);
   pad1->SetBottomMargin(0.119281);
   pad1->SetFrameBorderMode(0);
   pad1->SetFrameBorderMode(0);
   
   TGraph *graph = new TGraph(7);
   graph->SetName("Graph0");
   graph->SetTitle("");

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetPoint(0,0.9878937843,8.931414209e-42);
   graph->SetPoint(1,9.881926493,2.765144188e-41);
   graph->SetPoint(2,98.84916048,3.466388959e-41);
   graph->SetPoint(3,197.5106443,4.345470471e-41);
   graph->SetPoint(4,399.9347418,1.01422653e-40);
   graph->SetPoint(5,699.5126797,4.165162081e-40);
   graph->SetPoint(6,988.7906507,2.144313875e-39);
   
   TH1F *Graph_Graph_Graph17 = new TH1F("Graph_Graph_Graph17","",100,0.9,1099.9);
   Graph_Graph_Graph17->SetMinimum(1e-45);
   Graph_Graph_Graph17->SetMaximum(1e-33);
   Graph_Graph_Graph17->SetDirectory(0);
   Graph_Graph_Graph17->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph17->SetLineColor(ci);
   Graph_Graph_Graph17->GetXaxis()->SetTitle("M_{#chi} (GeV)");
   Graph_Graph_Graph17->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph17->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph17->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph17->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph17->GetYaxis()->SetTitle("#chi-Nucleon Cross Section (cm^{2})");
   Graph_Graph_Graph17->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph17->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph17->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph17->GetYaxis()->SetTitleOffset(1.32);
   Graph_Graph_Graph17->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph17->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph17->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph17->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph17->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph17);
   
   graph->Draw("al");
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   graph = new TGraph(6);
   graph->SetName("Graph");
   graph->SetTitle("");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);
   graph->SetPoint(0,0.9878937843,8.931414209e-42);
   graph->SetPoint(1,9.881926493,2.925887746e-41);
   graph->SetPoint(2,98.84916048,3.466388959e-41);
   graph->SetPoint(3,399.9347418,1.135572121e-40);
   graph->SetPoint(4,699.5126797,4.934595277e-40);
   graph->SetPoint(5,988.7906507,2.144313875e-39);
   
   TH1F *Graph_Graph_Graph28 = new TH1F("Graph_Graph_Graph28","",100,0.9,1099.9);
   Graph_Graph_Graph28->SetMinimum(7.680321e-42);
   Graph_Graph_Graph28->SetMaximum(2.333611e-39);
   Graph_Graph_Graph28->SetDirectory(0);
   Graph_Graph_Graph28->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph28->SetLineColor(ci);
   Graph_Graph_Graph28->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph28->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph28->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph28->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph28->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph28->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph28->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph28->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph28->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph28->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph28->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph28->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph28);
   
   multigraph->Add(graph,"L");
   
   graph = new TGraph(5);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#0099ff");
   graph->SetLineColor(ci);
   graph->SetLineStyle(3);
   graph->SetLineWidth(4);
   graph->SetPoint(0,250,2.8e-40);
   graph->SetPoint(1,500,3e-40);
   graph->SetPoint(2,1000,8.7e-40);
   graph->SetPoint(3,3000,9.9e-39);
   graph->SetPoint(4,5000,3.6e-38);
   
   TH1F *Graph_Graph_Graph39 = new TH1F("Graph_Graph_Graph39","Graph",100,225,5475);
   Graph_Graph_Graph39->SetMinimum(2.52e-40);
   Graph_Graph_Graph39->SetMaximum(3.9572e-38);
   Graph_Graph_Graph39->SetDirectory(0);
   Graph_Graph_Graph39->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph39->SetLineColor(ci);
   Graph_Graph_Graph39->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph39->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph39->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph39->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph39->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph39->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph39->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph39->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph39->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph39->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph39->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph39->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph39);
   
   multigraph->Add(graph,"L");
   
   graph = new TGraph(33);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#999999");
   graph->SetLineColor(ci);
   graph->SetLineWidth(3);
   graph->SetPoint(0,4.986789726,9.77678631e-37);
   graph->SetPoint(1,5.546884575,4.436687734e-37);
   graph->SetPoint(2,6.088337127,1.90288174e-37);
   graph->SetPoint(3,6.772153059,9.667054059e-38);
   graph->SetPoint(4,7.532772266,5.196205282e-38);
   graph->SetPoint(5,8.836839089,2.494932753e-38);
   graph->SetPoint(6,10.50552027,1.50131079e-38);
   graph->SetPoint(7,12.0005916,1.070068993e-38);
   graph->SetPoint(8,13.52724133,8.538322666e-39);
   graph->SetPoint(9,14.84768692,7.208470908e-39);
   graph->SetPoint(10,16.96070469,6.439075858e-39);
   graph->SetPoint(11,19.37443219,5.436183757e-39);
   graph->SetPoint(12,21.83914165,5.137884349e-39);
   graph->SetPoint(13,25.61991439,4.589493042e-39);
   graph->SetPoint(14,29.26595936,4.589493042e-39);
   graph->SetPoint(15,34.79231954,4.337654046e-39);
   graph->SetPoint(16,41.36223537,4.337654046e-39);
   graph->SetPoint(17,48.5228287,4.589493042e-39);
   graph->SetPoint(18,58.45817297,4.855953508e-39);
   graph->SetPoint(19,75.27259885,5.436183757e-39);
   graph->SetPoint(20,96.92338727,6.085744807e-39);
   graph->SetPoint(21,129.8840384,7.62698609e-39);
   graph->SetPoint(22,162.8510031,9.034047448e-39);
   graph->SetPoint(23,201.4867926,1.070068993e-38);
   graph->SetPoint(24,242.7424387,1.197929855e-38);
   graph->SetPoint(25,308.4316054,1.50131079e-38);
   graph->SetPoint(26,381.6058465,1.778279486e-38);
   graph->SetPoint(27,472.1404018,2.228636483e-38);
   graph->SetPoint(28,616.0860102,2.793048345e-38);
   graph->SetPoint(29,825.5978383,3.703628986e-38);
   graph->SetPoint(30,1021.467828,4.641589099e-38);
   graph->SetPoint(31,1280.735204,5.817091682e-38);
   graph->SetPoint(32,2013.393472,8.635242509e-38);
   
   TH1F *Graph_Graph_Graph410 = new TH1F("Graph_Graph_Graph410","Graph",100,4.545098,2228.982);
   Graph_Graph_Graph410->SetMinimum(3.796754e-39);
   Graph_Graph_Graph410->SetMaximum(1.057714e-36);
   Graph_Graph_Graph410->SetDirectory(0);
   Graph_Graph_Graph410->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph410->SetLineColor(ci);
   Graph_Graph_Graph410->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph410->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph410->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph410->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph410->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph410->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph410->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph410->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph410->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph410->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph410->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph410->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph410);
   
   multigraph->Add(graph,"L");
   
   graph = new TGraph(27);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#cc33ff");
   graph->SetLineColor(ci);
   graph->SetLineStyle(6);
   graph->SetLineWidth(3);
   graph->SetPoint(0,175.2488977,5.054279138e-39);
   graph->SetPoint(1,175.7590903,5.293914195e-39);
   graph->SetPoint(2,179.6598848,5.293520551e-39);
   graph->SetPoint(3,186.3538044,5.342138895e-39);
   graph->SetPoint(4,196.4347114,5.341185592e-39);
   graph->SetPoint(5,207.6674603,5.364979344e-39);
   graph->SetPoint(6,217.3037419,5.464495901e-39);
   graph->SetPoint(7,228.0541229,5.540075086e-39);
   graph->SetPoint(8,241.4456566,5.69514615e-39);
   graph->SetPoint(9,256.7472549,5.908973379e-39);
   graph->SetPoint(10,271.030865,5.990581319e-39);
   graph->SetPoint(11,292.4572767,6.157865545e-39);
   graph->SetPoint(12,319.2919487,6.418163946e-39);
   graph->SetPoint(13,352.6952921,6.627500838e-39);
   graph->SetPoint(14,387.3116235,7.168352747e-39);
   graph->SetPoint(15,421.6105927,7.611198894e-39);
   graph->SetPoint(16,459.6163494,8.194476512e-39);
   graph->SetPoint(17,505.4719456,8.620162454e-39);
   graph->SetPoint(18,563.2603332,9.541672104e-39);
   graph->SetPoint(19,635.9717549,1.075877787e-38);
   graph->SetPoint(20,692.280222,1.185479991e-38);
   graph->SetPoint(21,745.896998,1.294244088e-38);
   graph->SetPoint(22,789.6904484,1.355358565e-38);
   graph->SetPoint(23,831.1770684,1.412825852e-38);
   graph->SetPoint(24,886.4294724,1.521209649e-38);
   graph->SetPoint(25,950.9010323,1.653123478e-38);
   graph->SetPoint(26,983.4362007,1.715352422e-38);
   
   TH1F *Graph_Graph_Graph511 = new TH1F("Graph_Graph_Graph511","Graph",100,94.43017,1064.255);
   Graph_Graph_Graph511->SetMinimum(3.844355e-39);
   Graph_Graph_Graph511->SetMaximum(1.836345e-38);
   Graph_Graph_Graph511->SetDirectory(0);
   Graph_Graph_Graph511->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph511->SetLineColor(ci);
   Graph_Graph_Graph511->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph511->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph511->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph511->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph511->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph511->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph511->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph511->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph511->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph511->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph511->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph511->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph511);
   
   multigraph->Add(graph,"L");
   
   graph = new TGraph(35);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#6666ff");
   graph->SetLineColor(ci);
   graph->SetLineStyle(6);
   graph->SetLineWidth(3);
   graph->SetPoint(0,3.981,1.54e-34);
   graph->SetPoint(1,4.365,2.157e-35);
   graph->SetPoint(2,4.786,4.738e-36);
   graph->SetPoint(3,5.248,1.629e-36);
   graph->SetPoint(4,5.754,6.808e-37);
   graph->SetPoint(5,6.31,3.262e-37);
   graph->SetPoint(6,6.918,1.77e-37);
   graph->SetPoint(7,7.586,1.026e-37);
   graph->SetPoint(8,8.318,6.337e-38);
   graph->SetPoint(9,9.12,4.123e-38);
   graph->SetPoint(10,10,2.898e-38);
   graph->SetPoint(11,10.965,2.108e-38);
   graph->SetPoint(12,12.023,1.601e-38);
   graph->SetPoint(13,13.183,1.258e-38);
   graph->SetPoint(14,14.454,1.019e-38);
   graph->SetPoint(15,15.849,8.492e-39);
   graph->SetPoint(16,17.378,7.25e-39);
   graph->SetPoint(17,19.055,6.313e-39);
   graph->SetPoint(18,20.893,5.572e-39);
   graph->SetPoint(19,22.909,5.012e-39);
   graph->SetPoint(20,25.119,4.563e-39);
   graph->SetPoint(21,31.623,3.843e-39);
   graph->SetPoint(22,39.811,3.504e-39);
   graph->SetPoint(23,50.119,3.42e-39);
   graph->SetPoint(24,63.096,3.545e-39);
   graph->SetPoint(25,79.433,3.85e-39);
   graph->SetPoint(26,100,4.334e-39);
   graph->SetPoint(27,125.893,5.013e-39);
   graph->SetPoint(28,158.489,5.919e-39);
   graph->SetPoint(29,199.526,7.09e-39);
   graph->SetPoint(30,251.189,8.593e-39);
   graph->SetPoint(31,316.228,1.05e-38);
   graph->SetPoint(32,1000,3.082e-38);
   graph->SetPoint(33,3162.278,9.526e-38);
   graph->SetPoint(34,10000,2.991e-37);
   
   TH1F *Graph_Graph_Graph612 = new TH1F("Graph_Graph_Graph612","Graph",100,3.5829,10999.6);
   Graph_Graph_Graph612->SetMinimum(3.078e-39);
   Graph_Graph_Graph612->SetMaximum(1.693997e-34);
   Graph_Graph_Graph612->SetDirectory(0);
   Graph_Graph_Graph612->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph612->SetLineColor(ci);
   Graph_Graph_Graph612->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph612->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph612->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph612->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph612->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph612->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph612->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph612->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph612->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph612->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph612->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph612->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph612);
   
   multigraph->Add(graph,"L");
   multigraph->Draw("L");
   TLatex *   tex = new TLatex(0.5566038,0.9460784,"CMS Preliminary   #sqrt{s} = 8 TeV   L = 18.84 fb^{ -1}");
tex->SetNDC();
   tex->SetTextAlign(22);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.7877358,0.1944444,"Axial-vector: #frac{(#bar{#chi}#gamma_{#mu}#gamma_{5}#chi) (#bar{q}#gamma^{#mu}#gamma_{5}q)}{#Lambda^{2}}");
tex->SetNDC();
   tex->SetTextAlign(22);

   ci = TColor::GetColor("#990066");
   tex->SetTextColor(ci);
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(0);
   tex->Draw();
      tex = new TLatex(0.3254717,0.1846405,"Spin Dependent");
tex->SetNDC();
   tex->SetTextAlign(22);
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(0);
   tex->Draw();
   
   TLegend *leg = new TLegend(0.6698113,0.6552288,0.8993711,0.8954248,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.022);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Graph","CMS RazorDM (18.84 fb^{-1})","l");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph0","CMS Monojet (19.7 fb^{-1})","l");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph","IceCube W^{+}W^{-}","l");

   ci = TColor::GetColor("#0099ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(3);
   entry->SetLineWidth(4);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph","SIMPLE 2012","l");

   ci = TColor::GetColor("#999999");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph","COUPP 2012","l");

   ci = TColor::GetColor("#6666ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(6);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph","Super-K W^{+}W^{-}","l");

   ci = TColor::GetColor("#cc33ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(6);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   pad1->Modified();
   C->cd();
   C->Modified();
   C->cd();
   C->SetSelected(C);
}
