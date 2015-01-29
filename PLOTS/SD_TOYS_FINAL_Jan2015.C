{
//=========Macro generated from canvas: C/C
//=========  (Thu Jan 29 10:24:55 2015) by ROOT version5.34/11
   TCanvas *C = new TCanvas("C", "C",0,22,640,640);
   C->Range(0,0,1,1);
   C->SetFillColor(0);
   C->SetBorderMode(0);
   C->SetBorderSize(2);
   C->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0,1,1);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-0.4867733,-46.5,3.188358,-31.5);
   pad1->SetFillColor(0);
   pad1->SetBorderMode(0);
   pad1->SetBorderSize(2);
   pad1->SetLogx();
   pad1->SetLogy();
   pad1->SetLeftMargin(0.12);
   pad1->SetRightMargin(0.04);
   pad1->SetFrameBorderMode(0);
   pad1->SetFrameBorderMode(0);
   
   TGraph *graph = new TGraph(7);
   graph->SetName("Graph0");
   graph->SetTitle("");

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ccccff");
   graph->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetPoint(0,1,8.68e-42);
   graph->SetPoint(1,10,2.7e-41);
   graph->SetPoint(2,100,3.41e-41);
   graph->SetPoint(3,200,4.33e-41);
   graph->SetPoint(4,400,9.6e-41);
   graph->SetPoint(5,700,4.03e-40);
   graph->SetPoint(6,1000,2.08e-39);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","",100,0.9,1099.9);
   Graph_Graph1->SetMinimum(1e-45);
   Graph_Graph1->SetMaximum(1e-33);
   Graph_Graph1->SetDirectory(0);
   Graph_Graph1->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1->SetLineColor(ci);
   Graph_Graph1->GetXaxis()->SetTitle("M_{#chi} (GeV)");
   Graph_Graph1->GetXaxis()->SetLabelFont(42);
   Graph_Graph1->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1->GetXaxis()->SetTitleFont(42);
   Graph_Graph1->GetYaxis()->SetTitle("#chi-Nucleon Cross Section (cm^{2})");
   Graph_Graph1->GetYaxis()->SetLabelFont(42);
   Graph_Graph1->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetYaxis()->SetTitleOffset(1.7);
   Graph_Graph1->GetYaxis()->SetTitleFont(42);
   Graph_Graph1->GetZaxis()->SetLabelFont(42);
   Graph_Graph1->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1);
   
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
   graph->SetLineWidth(3);
   graph->SetPoint(0,1,8.53369e-42);
   graph->SetPoint(1,10,2.8562e-41);
   graph->SetPoint(2,100,3.29667e-41);
   graph->SetPoint(3,400,1.11705e-40);
   graph->SetPoint(4,700,4.73159e-40);
   graph->SetPoint(5,1000,2.12224e-39);
   
   TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","",100,0.9,1099.9);
   Graph_Graph2->SetMinimum(7.680321e-42);
   Graph_Graph2->SetMaximum(2.333611e-39);
   Graph_Graph2->SetDirectory(0);
   Graph_Graph2->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph2->SetLineColor(ci);
   Graph_Graph2->GetXaxis()->SetLabelFont(42);
   Graph_Graph2->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph2->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph2->GetXaxis()->SetTitleFont(42);
   Graph_Graph2->GetYaxis()->SetLabelFont(42);
   Graph_Graph2->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph2->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph2->GetYaxis()->SetTitleFont(42);
   Graph_Graph2->GetZaxis()->SetLabelFont(42);
   Graph_Graph2->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph2->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph2->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2);
   
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
   
   TH1F *Graph_Graph3 = new TH1F("Graph_Graph3","Graph",100,225,5475);
   Graph_Graph3->SetMinimum(2.52e-40);
   Graph_Graph3->SetMaximum(3.9572e-38);
   Graph_Graph3->SetDirectory(0);
   Graph_Graph3->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3->SetLineColor(ci);
   Graph_Graph3->GetXaxis()->SetLabelFont(42);
   Graph_Graph3->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph3->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph3->GetXaxis()->SetTitleFont(42);
   Graph_Graph3->GetYaxis()->SetLabelFont(42);
   Graph_Graph3->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph3->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph3->GetYaxis()->SetTitleFont(42);
   Graph_Graph3->GetZaxis()->SetLabelFont(42);
   Graph_Graph3->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph3->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph3->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph3);
   
   multigraph->Add(graph,"L");
   
   graph = new TGraph(33);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#999999");
   graph->SetLineColor(ci);
   graph->SetLineWidth(3);
   graph->SetPoint(0,5.050109043,9.619415791e-37);
   graph->SetPoint(1,5.570498429,4.223381797e-37);
   graph->SetPoint(2,6.092375023,1.831283153e-37);
   graph->SetPoint(3,6.798359602,9.494826124e-38);
   graph->SetPoint(4,7.62950357,5.026272331e-38);
   graph->SetPoint(5,8.933253482,2.468914635e-38);
   graph->SetPoint(6,10.64202754,1.468314144e-38);
   graph->SetPoint(7,12.05013908,1.052880891e-38);
   graph->SetPoint(8,13.68495145,8.238628808e-39);
   graph->SetPoint(9,14.93900913,7.15266767e-39);
   graph->SetPoint(10,17.11309892,6.209850691e-39);
   graph->SetPoint(11,19.54764581,5.302397504e-39);
   graph->SetPoint(12,22.07920312,4.899681436e-39);
   graph->SetPoint(13,25.65550793,4.508768213e-39);
   graph->SetPoint(14,29.39340619,4.343186103e-39);
   graph->SetPoint(15,34.84152479,4.218615674e-39);
   graph->SetPoint(16,41.41884114,4.253838086e-39);
   graph->SetPoint(17,48.6849129,4.434410794e-39);
   graph->SetPoint(18,59.20709919,4.700162541e-39);
   graph->SetPoint(19,75.34993671,5.258492863e-39);
   graph->SetPoint(20,97.26741432,6.082101654e-39);
   graph->SetPoint(21,131.0246447,7.45629384e-39);
   graph->SetPoint(22,163.9459149,8.696137413e-39);
   graph->SetPoint(23,202.8261252,1.014214401e-38);
   graph->SetPoint(24,243.2247807,1.187787222e-38);
   graph->SetPoint(25,309.5828274,1.468314144e-38);
   graph->SetPoint(26,383.0166356,1.763034612e-38);
   graph->SetPoint(27,473.8718486,2.12573044e-38);
   graph->SetPoint(28,622.2992612,2.750736493e-38);
   graph->SetPoint(29,833.600006,3.574335244e-38);
   graph->SetPoint(30,1028.44812,4.400176732e-38);
   graph->SetPoint(31,1283.338939,5.507657734e-38);
   graph->SetPoint(32,2026.806245,8.593203455e-38);
   
   TH1F *Graph_Graph4 = new TH1F("Graph_Graph4","Graph",100,4.545098,2228.982);
   Graph_Graph4->SetMinimum(3.796754e-39);
   Graph_Graph4->SetMaximum(1.057714e-36);
   Graph_Graph4->SetDirectory(0);
   Graph_Graph4->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph4->SetLineColor(ci);
   Graph_Graph4->GetXaxis()->SetLabelFont(42);
   Graph_Graph4->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph4->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph4->GetXaxis()->SetTitleFont(42);
   Graph_Graph4->GetYaxis()->SetLabelFont(42);
   Graph_Graph4->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph4->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph4->GetYaxis()->SetTitleFont(42);
   Graph_Graph4->GetZaxis()->SetLabelFont(42);
   Graph_Graph4->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph4->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph4->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph4);
   
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
   
   TH1F *Graph_Graph5 = new TH1F("Graph_Graph5","Graph",100,94.43017,1064.255);
   Graph_Graph5->SetMinimum(3.844355e-39);
   Graph_Graph5->SetMaximum(1.836345e-38);
   Graph_Graph5->SetDirectory(0);
   Graph_Graph5->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph5->SetLineColor(ci);
   Graph_Graph5->GetXaxis()->SetLabelFont(42);
   Graph_Graph5->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph5->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph5->GetXaxis()->SetTitleFont(42);
   Graph_Graph5->GetYaxis()->SetLabelFont(42);
   Graph_Graph5->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph5->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph5->GetYaxis()->SetTitleFont(42);
   Graph_Graph5->GetZaxis()->SetLabelFont(42);
   Graph_Graph5->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph5->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph5->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph5);
   
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
   
   TH1F *Graph_Graph6 = new TH1F("Graph_Graph6","Graph",100,3.5829,10999.6);
   Graph_Graph6->SetMinimum(3.078e-39);
   Graph_Graph6->SetMaximum(1.693997e-34);
   Graph_Graph6->SetDirectory(0);
   Graph_Graph6->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph6->SetLineColor(ci);
   Graph_Graph6->GetXaxis()->SetLabelFont(42);
   Graph_Graph6->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph6->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph6->GetXaxis()->SetTitleFont(42);
   Graph_Graph6->GetYaxis()->SetLabelFont(42);
   Graph_Graph6->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph6->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph6->GetYaxis()->SetTitleFont(42);
   Graph_Graph6->GetZaxis()->SetLabelFont(42);
   Graph_Graph6->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph6->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph6->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph6);
   
   multigraph->Add(graph,"L");
   multigraph->Draw("L");
   TLatex *   tex = new TLatex(0.5,0.93,"CMS Preliminary   #sqrt{s} = 8 TeV   L = 18.84 fb^{ -1}");
tex->SetNDC();
   tex->SetTextAlign(22);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.75,0.15,"Vector: #frac{(#bar{#chi}#gamma_{#mu}#chi) (#bar{q}#gamma^{#mu}q)}{#Lambda^{2}}");
tex->SetNDC();
   tex->SetTextAlign(22);

   ci = TColor::GetColor("#990066");
   tex->SetTextColor(ci);
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(0);
   tex->Draw();
      tex = new TLatex(0.25,0.15,"Spin Independent");
tex->SetNDC();
   tex->SetTextAlign(22);
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(0);
   tex->Draw();
   
   TLegend *leg = new TLegend(0.6,0.65,0.83,0.89,NULL,"brNDC");
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
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph0","CMS Monojet (19.7 fb^{-1})","l");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
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
