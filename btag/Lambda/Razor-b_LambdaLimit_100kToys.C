{
//=========Macro generated from canvas: C/C
//=========  (Sun Mar 15 19:11:07 2015) by ROOT version5.34/11
   TCanvas *C = new TCanvas("C", "C",0,0,640,640);
   C->SetHighLightColor(2);
   C->Range(0.4183201,0.875,3.310395,2.125);
   C->SetFillColor(0);
   C->SetBorderMode(0);
   C->SetBorderSize(2);
   C->SetLogx();
   C->SetLogy();
   C->SetFrameBorderMode(0);
   C->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   TGraph *graph = new TGraph(16);
   graph->SetName("Graph");
   graph->SetTitle("");

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ffcccc");
   graph->SetFillColor(ci);
   graph->SetFillStyle(3013);
   graph->SetPoint(0,0.1000000015,45.35645294);
   graph->SetPoint(1,1,46.65401459);
   graph->SetPoint(2,10,42.04399109);
   graph->SetPoint(3,100,47.2220993);
   graph->SetPoint(4,200,41.38459396);
   graph->SetPoint(5,300,33.08925629);
   graph->SetPoint(6,400,27.60181427);
   graph->SetPoint(7,1000,11.4960804);
   graph->SetPoint(8,1000,15.25439262);
   graph->SetPoint(9,400,34.09428787);
   graph->SetPoint(10,300,40.24570084);
   graph->SetPoint(11,200,53.79262924);
   graph->SetPoint(12,100,61.16445541);
   graph->SetPoint(13,10,56.77746201);
   graph->SetPoint(14,1,54.82881165);
   graph->SetPoint(15,0.1000000015,55.69472122);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","",100,0.09,1099.99);
   Graph_Graph1->SetMinimum(6.529243);
   Graph_Graph1->SetMaximum(66.13129);
   Graph_Graph1->SetDirectory(0);
   Graph_Graph1->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1->SetLineColor(ci);
   Graph_Graph1->GetXaxis()->SetLabelFont(42);
   Graph_Graph1->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetXaxis()->SetTitleFont(42);
   Graph_Graph1->GetYaxis()->SetLabelFont(42);
   Graph_Graph1->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetYaxis()->SetTitleFont(42);
   Graph_Graph1->GetZaxis()->SetLabelFont(42);
   Graph_Graph1->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1);
   
   multigraph->Add(graph,"");
   multigraph->Draw("aF");
   multigraph->GetXaxis()->SetTitle("M_{#chi} (GeV)");
   multigraph->GetXaxis()->CenterTitle(true);
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetLabelSize(0.035);
   multigraph->GetXaxis()->SetTitleSize(0.035);
   multigraph->GetXaxis()->SetTitleOffset(1.1);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetTitle("#Lambda (GeV)");
   multigraph->GetYaxis()->CenterTitle(true);
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetLabelSize(0.035);
   multigraph->GetYaxis()->SetTitleSize(0.035);
   multigraph->GetYaxis()->SetTitleOffset(1.1);
   multigraph->GetYaxis()->SetTitleFont(42);
   
   multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   graph = new TGraph(8);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#ff6666");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetPoint(0,0.1000000015,55.69472122);
   graph->SetPoint(1,1,54.82881165);
   graph->SetPoint(2,10,56.77746201);
   graph->SetPoint(3,100,61.16445541);
   graph->SetPoint(4,200,53.79262924);
   graph->SetPoint(5,300,40.24570084);
   graph->SetPoint(6,400,34.09428787);
   graph->SetPoint(7,1000,15.25439262);
   
   TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","Graph",100,0.09,1099.99);
   Graph_Graph2->SetMinimum(10.66339);
   Graph_Graph2->SetMaximum(65.75546);
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
   
   multigraph->Add(graph,"");
   
   graph = new TGraph(8);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#ff6666");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetPoint(0,0.1000000015,51.68412018);
   graph->SetPoint(1,1,51.86566162);
   graph->SetPoint(2,10,45.09855652);
   graph->SetPoint(3,100,56.43715668);
   graph->SetPoint(4,200,47.71953201);
   graph->SetPoint(5,300,37.37339783);
   graph->SetPoint(6,400,31.55033684);
   graph->SetPoint(7,1000,14.10360241);
   
   TH1F *Graph_Graph3 = new TH1F("Graph_Graph3","Graph",100,0.09,1099.99);
   Graph_Graph3->SetMinimum(9.870247);
   Graph_Graph3->SetMaximum(60.67051);
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
   
   multigraph->Add(graph,"");
   
   graph = new TGraph(8);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#ff6666");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetPoint(0,0.1000000015,45.35645294);
   graph->SetPoint(1,1,46.65401459);
   graph->SetPoint(2,10,42.04399109);
   graph->SetPoint(3,100,47.2220993);
   graph->SetPoint(4,200,41.38459396);
   graph->SetPoint(5,300,33.08925629);
   graph->SetPoint(6,400,27.60181427);
   graph->SetPoint(7,1000,11.4960804);
   
   TH1F *Graph_Graph4 = new TH1F("Graph_Graph4","Graph",100,0.09,1099.99);
   Graph_Graph4->SetMinimum(7.923479);
   Graph_Graph4->SetMaximum(50.7947);
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
   
   multigraph->Add(graph,"");
   
   graph = new TGraph(8);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);
   graph->SetPoint(0,0.1000000015,43.02961349);
   graph->SetPoint(1,1,45.61245346);
   graph->SetPoint(2,10,41.85424423);
   graph->SetPoint(3,100,53.46913528);
   graph->SetPoint(4,200,46.90817642);
   graph->SetPoint(5,300,32.2218895);
   graph->SetPoint(6,400,27.84504509);
   graph->SetPoint(7,1000,13.37393475);
   
   TH1F *Graph_Graph5 = new TH1F("Graph_Graph5","Graph",100,0.09,1099.99);
   Graph_Graph5->SetMinimum(9.364415);
   Graph_Graph5->SetMaximum(57.47866);
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
   
   multigraph->Add(graph,"");
   multigraph->Draw("C");
   TLatex *   tex = new TLatex(0.23,0.92,"CMS Preliminary");
tex->SetNDC();
   tex->SetTextAlign(22);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.41,0.92,", #sqrt{s} = 8 TeV");
tex->SetNDC();
   tex->SetTextAlign(22);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TLegend *leg = new TLegend(0.41,0.75,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.022);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Graph","Razor razor-b Expected -1#sigma (18.84 fb^{-1})","l");

   ci = TColor::GetColor("#ff6666");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph","Razor razor-b Expected (18.84 fb^{-1})","l");

   ci = TColor::GetColor("#ff6666");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph","Razor razor-b Expected +1#sigma (18.84 fb^{-1})","l");

   ci = TColor::GetColor("#ff6666");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph","Razor razor-b Observed (18.84 fb^{-1})","l");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   C->Modified();
   C->cd();
   C->SetSelected(C);
}
