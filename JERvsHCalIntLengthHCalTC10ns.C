{
//=========Macro generated from canvas: JER vs IntLength/JER vs IntLength
//=========  (Thu Feb 26 10:42:57 2015) by ROOT version5.34/10
   TCanvas *JER vs IntLength = new TCanvas("JER vs IntLength", "JER vs IntLength",0,0,2000,2000);
   gStyle->SetOptTitle(0);
   JER vs IntLength->Range(3.757942,0.09638555,7.431234,6.120482);
   JER vs IntLength->SetFillColor(0);
   JER vs IntLength->SetBorderMode(0);
   JER vs IntLength->SetBorderSize(2);
   JER vs IntLength->SetLeftMargin(0.2);
   JER vs IntLength->SetRightMargin(0.02);
   JER vs IntLength->SetTopMargin(0.02);
   JER vs IntLength->SetBottomMargin(0.15);
   JER vs IntLength->SetFrameBorderMode(0);
   JER vs IntLength->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(5);
   gre->SetName("Graph0");
   gre->SetTitle("Jet Energy Resolution vs HCal Nuclear Interaction Lengths, HCal Timing Cut 10 ns");
   gre->SetFillColor(1);
   gre->SetLineWidth(6);
   gre->SetPoint(0,4.729,3.96058);
   gre->SetPointError(0,0,0.0508981);
   gre->SetPoint(1,5.32,3.99758);
   gre->SetPointError(1,0,0.0513736);
   gre->SetPoint(2,5.911,3.89897);
   gre->SetPointError(2,0,0.0501064);
   gre->SetPoint(3,6.502,3.90335);
   gre->SetPointError(3,0,0.0501626);
   gre->SetPoint(4,7.093,3.93428);
   gre->SetPointError(4,0,0.0505601);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","Jet Energy Resolution vs HCal Nuclear Interaction Lengths, HCal Timing Cut 10 ns",100,4.4926,7.3294);
   Graph_Graph1->SetMinimum(1);
   Graph_Graph1->SetMaximum(6);
   Graph_Graph1->SetDirectory(0);
   Graph_Graph1->SetStats(0);
   Graph_Graph1->GetXaxis()->SetTitle("HCal Interaction Lengths / #lambda_{I}");
   Graph_Graph1->GetXaxis()->SetRange(1,101);
   Graph_Graph1->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph1->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1->GetYaxis()->SetTitle("RMS_{90}(E_{j}) / Mean_{90}(E_{j}) [%]");
   Graph_Graph1->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph1->GetYaxis()->SetTitleOffset(1.2);
   gre->SetHistogram(Graph_Graph1);
   
   gre->Draw("alp");
   
   gre = new TGraphErrors(5);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetLineWidth(6);
   gre->SetPoint(0,4.729,3.24022);
   gre->SetPointError(0,0,0.0415311);
   gre->SetPoint(1,5.32,3.15609);
   gre->SetPointError(1,0,0.0404528);
   gre->SetPoint(2,5.911,3.18485);
   gre->SetPointError(2,0,0.0408214);
   gre->SetPoint(3,6.502,3.19405);
   gre->SetPointError(3,0,0.0409393);
   gre->SetPoint(4,7.093,3.09006);
   gre->SetPointError(4,0,0.0396064);
   
   TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","Graph",100,4.4926,7.3294);
   Graph_Graph2->SetMinimum(3.027324);
   Graph_Graph2->SetMaximum(3.304881);
   Graph_Graph2->SetDirectory(0);
   Graph_Graph2->SetStats(0);
   gre->SetHistogram(Graph_Graph2);
   
   gre->Draw("");
   
   gre = new TGraphErrors(5);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineColor(3);
   gre->SetLineWidth(6);
   gre->SetPoint(0,4.729,3.24723);
   gre->SetPointError(0,0,0.0413601);
   gre->SetPoint(1,5.32,3.13233);
   gre->SetPointError(1,0,0.0398966);
   gre->SetPoint(2,5.911,3.16239);
   gre->SetPointError(2,0,0.0402795);
   gre->SetPoint(3,6.502,3.10229);
   gre->SetPointError(3,0,0.039514);
   gre->SetPoint(4,7.093,3.05678);
   gre->SetPointError(4,0,0.0389343);
   
   TH1F *Graph_Graph3 = new TH1F("Graph_Graph3","Graph",100,4.4926,7.3294);
   Graph_Graph3->SetMinimum(2.990771);
   Graph_Graph3->SetMaximum(3.315665);
   Graph_Graph3->SetDirectory(0);
   Graph_Graph3->SetStats(0);
   gre->SetHistogram(Graph_Graph3);
   
   gre->Draw("");
   
   gre = new TGraphErrors(5);
   gre->SetName("Graph3");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineColor(4);
   gre->SetLineWidth(6);
   gre->SetPoint(0,4.729,3.3633);
   gre->SetPointError(0,0,0.0429747);
   gre->SetPoint(1,5.32,3.31957);
   gre->SetPointError(1,0,0.0424159);
   gre->SetPoint(2,5.911,3.19187);
   gre->SetPointError(2,0,0.0407842);
   gre->SetPoint(3,6.502,3.21217);
   gre->SetPointError(3,0,0.0410436);
   gre->SetPoint(4,7.093,3.19183);
   gre->SetPointError(4,0,0.0428674);
   
   TH1F *Graph_Graph4 = new TH1F("Graph_Graph4","Graph",100,4.4926,7.3294);
   Graph_Graph4->SetMinimum(3.123231);
   Graph_Graph4->SetMaximum(3.432006);
   Graph_Graph4->SetDirectory(0);
   Graph_Graph4->SetStats(0);
   gre->SetHistogram(Graph_Graph4);
   
   gre->Draw("");
   
   gre = new TGraphErrors(5);
   gre->SetName("Graph4");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineColor(6);
   gre->SetLineWidth(6);
   gre->SetPoint(0,4.729,4.07791);
   gre->SetPointError(0,0,0.0520674);
   gre->SetPoint(1,5.32,3.92207);
   gre->SetPointError(1,0,0.0500776);
   gre->SetPoint(2,5.911,3.76846);
   gre->SetPointError(2,0,0.0481163);
   gre->SetPoint(3,6.502,3.82797);
   gre->SetPointError(3,0,0.0488761);
   gre->SetPoint(4,7.093,3.6093);
   gre->SetPointError(4,0,0.0460841);
   
   TH1F *Graph_Graph5 = new TH1F("Graph_Graph5","Graph",100,4.4926,7.3294);
   Graph_Graph5->SetMinimum(3.50654);
   Graph_Graph5->SetMaximum(4.186654);
   Graph_Graph5->SetDirectory(0);
   Graph_Graph5->SetStats(0);
   gre->SetHistogram(Graph_Graph5);
   
   gre->Draw("");
   
   TLegend *leg = new TLegend(0.8,0.75,1,0.95,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(19);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("Graph0","45 GeV Jets","lpe");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(6);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph1","100 GeV Jets","lpe");
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(6);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph2","180 GeV Jets","lpe");
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(6);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph3","250 GeV Jets","lpe");
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(6);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph4","500 GeV Jets","lpe");
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(6);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   JER vs IntLength->Modified();
   JER vs IntLength->cd();
   JER vs IntLength->SetSelected(JER vs IntLength);
}
