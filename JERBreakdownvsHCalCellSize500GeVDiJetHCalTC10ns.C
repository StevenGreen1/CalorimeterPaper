{
//=========Macro generated from canvas: JER vs CellSize/JER vs CellSize
//=========  (Tue Feb 24 22:56:17 2015) by ROOT version5.34/10
   TCanvas *JER vs CellSize = new TCanvas("JER vs CellSize", "JER vs CellSize",0,0,2000,2000);
   gStyle->SetOptTitle(0);
   JER vs CellSize->Range(-1.538462,-1.084337,6.153846,6.144578);
   JER vs CellSize->SetFillColor(0);
   JER vs CellSize->SetBorderMode(0);
   JER vs CellSize->SetBorderSize(2);
   JER vs CellSize->SetLeftMargin(0.2);
   JER vs CellSize->SetRightMargin(0.02);
   JER vs CellSize->SetTopMargin(0.02);
   JER vs CellSize->SetBottomMargin(0.15);
   JER vs CellSize->SetFrameBorderMode(0);
   JER vs CellSize->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(6);
   gre->SetName("Graph0");
   gre->SetTitle("Jet Energy Resolution Breakdown vs HCal Cell Size, Di-Jet Energy 500 GeV, HCal Timing Cut 10 ns");
   gre->SetFillColor(1);
   gre->SetLineWidth(6);
   gre->SetPoint(0,0.5,3.092);
   gre->SetPointError(0,0,0.0395081);
   gre->SetPoint(1,1.5,3.25945);
   gre->SetPointError(1,0,0.0416477);
   gre->SetPoint(2,2.5,3.19187);
   gre->SetPointError(2,0,0.0407842);
   gre->SetPoint(3,3.5,3.26715);
   gre->SetPointError(3,0,0.0417461);
   gre->SetPoint(4,4.5,3.38435);
   gre->SetPointError(4,0,0.0432436);
   gre->SetPoint(5,5.5,3.79599);
   gre->SetPointError(5,0,0.0485033);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","Jet Energy Resolution Breakdown vs HCal Cell Size, Di-Jet Energy 500 GeV, HCal Timing Cut 10 ns",6,0,6);
   Graph_Graph1->SetMinimum(0);
   Graph_Graph1->SetMaximum(6);
   Graph_Graph1->SetDirectory(0);
   Graph_Graph1->SetStats(0);
   Graph_Graph1->GetXaxis()->SetTitle("HCal Cell Size [mm]");
   Graph_Graph1->GetXaxis()->SetBinLabel(1,"10");
   Graph_Graph1->GetXaxis()->SetBinLabel(2,"20");
   Graph_Graph1->GetXaxis()->SetBinLabel(3,"30");
   Graph_Graph1->GetXaxis()->SetBinLabel(4,"40");
   Graph_Graph1->GetXaxis()->SetBinLabel(5,"50");
   Graph_Graph1->GetXaxis()->SetBinLabel(6,"100");
   Graph_Graph1->GetXaxis()->SetNdivisions(-6);
   Graph_Graph1->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph1->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph1->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1->GetYaxis()->SetTitle("RMS_{90}(E_{j}) / Mean_{90}(E_{j}) [%]");
   Graph_Graph1->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph1->GetYaxis()->SetTitleOffset(1.2);
   gre->SetHistogram(Graph_Graph1);
   
   gre->Draw("alp");
   
   gre = new TGraphErrors(6);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineColor(4);
   gre->SetLineWidth(6);
   gre->SetPoint(0,0.5,1.75586);
   gre->SetPointError(0,0,0.0224356);
   gre->SetPoint(1,1.5,1.75581);
   gre->SetPointError(1,0,0.0224349);
   gre->SetPoint(2,2.5,1.75509);
   gre->SetPointError(2,0,0.0224257);
   gre->SetPoint(3,3.5,1.71896);
   gre->SetPointError(3,0,0.021964);
   gre->SetPoint(4,4.5,1.84134);
   gre->SetPointError(4,0,0.0235278);
   gre->SetPoint(5,5.5,1.89803);
   gre->SetPointError(5,0,0.0242522);
   
   TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","Graph",100,0,6);
   Graph_Graph2->SetMinimum(1.674467);
   Graph_Graph2->SetMaximum(1.944811);
   Graph_Graph2->SetDirectory(0);
   Graph_Graph2->SetStats(0);
   gre->SetHistogram(Graph_Graph2);
   
   gre->Draw("");
   
   gre = new TGraphErrors(6);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetLineWidth(6);
   gre->SetPoint(0,0.5,2.545078);
   gre->SetPointError(0,0,0.04543393);
   gre->SetPoint(1,1.5,2.746114);
   gre->SetPointError(1,0,0.04730598);
   gre->SetPoint(2,2.5,2.666026);
   gre->SetPointError(2,0,0.04654313);
   gre->SetPoint(3,3.5,2.778389);
   gre->SetPointError(3,0,0.04717158);
   gre->SetPoint(4,4.5,2.839594);
   gre->SetPointError(4,0,0.0492297);
   gre->SetPoint(5,5.5,3.287404);
   gre->SetPointError(5,0,0.05422852);
   
   TH1F *Graph_Graph3 = new TH1F("Graph_Graph3","Graph",100,0,6);
   Graph_Graph3->SetMinimum(2.415445);
   Graph_Graph3->SetMaximum(3.425831);
   Graph_Graph3->SetDirectory(0);
   Graph_Graph3->SetStats(0);
   gre->SetHistogram(Graph_Graph3);
   
   gre->Draw("");
   
   gre = new TGraphErrors(6);
   gre->SetName("Graph3");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineColor(8);
   gre->SetLineStyle(9);
   gre->SetLineWidth(4);
   gre->SetPoint(0,0.5,1.213055);
   gre->SetPointError(0,0,0.05367986);
   gre->SetPoint(1,1.5,1.371514);
   gre->SetPointError(1,0,0.05623099);
   gre->SetPoint(2,2.5,1.253532);
   gre->SetPointError(2,0,0.055409);
   gre->SetPoint(3,3.5,1.446579);
   gre->SetPointError(3,0,0.05606991);
   gre->SetPoint(4,4.5,1.094625);
   gre->SetPointError(4,0,0.05953445);
   gre->SetPoint(5,5.5,1.540053);
   gre->SetPointError(5,0,0.06571051);
   
   TH1F *Graph_Graph4 = new TH1F("Graph_Graph4","Graph",100,0,6);
   Graph_Graph4->SetMinimum(0.9780228);
   Graph_Graph4->SetMaximum(1.662831);
   Graph_Graph4->SetDirectory(0);
   Graph_Graph4->SetStats(0);
   gre->SetHistogram(Graph_Graph4);
   
   gre->Draw("");
   
   gre = new TGraphErrors(6);
   gre->SetName("Graph4");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineColor(6);
   gre->SetLineStyle(9);
   gre->SetLineWidth(4);
   gre->SetPoint(0,0.5,1.219809);
   gre->SetPointError(0,0,0.05365476);
   gre->SetPoint(1,1.5,1.370436);
   gre->SetPointError(1,0,0.05623525);
   gre->SetPoint(2,2.5,1.153888);
   gre->SetPointError(2,0,0.05576134);
   gre->SetPoint(3,3.5,1.314924);
   gre->SetPointError(3,0,0.05659668);
   gre->SetPoint(4,4.5,1.241912);
   gre->SetPointError(4,0,0.05906118);
   gre->SetPoint(5,5.5,1.126236);
   gre->SetPointError(5,0,0.06706659);
   
   TH1F *Graph_Graph5 = new TH1F("Graph_Graph5","Graph",100,0,6);
   Graph_Graph5->SetMinimum(1.022419);
   Graph_Graph5->SetMaximum(1.463421);
   Graph_Graph5->SetDirectory(0);
   Graph_Graph5->SetStats(0);
   gre->SetHistogram(Graph_Graph5);
   
   gre->Draw("");
   
   gre = new TGraphErrors(6);
   gre->SetName("Graph5");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ffcc00");
   gre->SetLineColor(ci);
   gre->SetLineStyle(9);
   gre->SetLineWidth(4);
   gre->SetPoint(0,0.5,1.875629);
   gre->SetPointError(0,0,0.07889002);
   gre->SetPoint(1,1.5,1.944736);
   gre->SetPointError(1,0,0.08720806);
   gre->SetPoint(2,2.5,2.050583);
   gre->SetPointError(2,0,0.07611553);
   gre->SetPoint(3,3.5,1.974292);
   gre->SetPointError(3,0,0.08669198);
   gre->SetPoint(4,4.5,2.307107);
   gre->SetPointError(4,0,0.07402723);
   gre->SetPoint(5,5.5,2.677098);
   gre->SetPointError(5,0,0.08160499);
   
   TH1F *Graph_Graph6 = new TH1F("Graph_Graph6","Graph",100,0,6);
   Graph_Graph6->SetMinimum(1.700543);
   Graph_Graph6->SetMaximum(2.854899);
   Graph_Graph6->SetDirectory(0);
   Graph_Graph6->SetStats(0);
   gre->SetHistogram(Graph_Graph6);
   
   gre->Draw("");
   
   TLegend *leg = new TLegend(0.2,0.75,0.7,0.95,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.03);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(19);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("Graph0","Jet Energy Resolution","lpe");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(6);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph1","Intrinsic Energy Resolution","lpe");
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(6);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph2","Total Confusion","lpe");
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(6);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph3","Neutral Hadron Confusion","lpe");
   entry->SetLineColor(8);
   entry->SetLineStyle(9);
   entry->SetLineWidth(4);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph4","Photon Confusion","lpe");
   entry->SetLineColor(6);
   entry->SetLineStyle(9);
   entry->SetLineWidth(4);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph5","Other Confusion","lpe");

   ci = TColor::GetColor("#ffcc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(9);
   entry->SetLineWidth(4);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   JER vs CellSize->Modified();
   JER vs CellSize->cd();
   JER vs CellSize->SetSelected(JER vs CellSize);
}
