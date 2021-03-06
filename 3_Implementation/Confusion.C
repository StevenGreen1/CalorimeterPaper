{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Dec  2 14:14:02 2015) by ROOT version5.34/22
   TCanvas *c1 = new TCanvas("c1", "c1",10,45,700,500);
   gStyle->SetOptStat(0);
   c1->Range(-36.83274,-0.507963,334.6975,4.497589);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetTickx(1);
   c1->SetTicky(1);
   c1->SetFrameLineWidth(2);
   c1->SetFrameBorderMode(0);
   c1->SetFrameLineWidth(2);
   c1->SetFrameBorderMode(0);
   
   TH2F *axesEj = new TH2F("axesEj","",1200,0,300,12000,0,6.5);
   axesEj->SetStats(0);
   axesEj->SetLineWidth(2);
   axesEj->SetMarkerStyle(20);
   axesEj->GetXaxis()->SetTitle("E_{j} [GeV]");
   axesEj->GetXaxis()->SetNdivisions(505);
   axesEj->GetXaxis()->SetLabelFont(132);
   axesEj->GetXaxis()->SetLabelSize(0.03);
   axesEj->GetXaxis()->SetTitleSize(0.036);
   axesEj->GetXaxis()->SetTitleFont(132);
   axesEj->GetYaxis()->SetTitle("RMS_{90}(E_{j}) / Mean_{90}(E_{j}) [%]");
   axesEj->GetYaxis()->SetRange(1,7385);
   axesEj->GetYaxis()->SetLabelFont(132);
   axesEj->GetYaxis()->SetLabelSize(0.03);
   axesEj->GetYaxis()->SetTitleSize(0.036);
   axesEj->GetYaxis()->SetTitleFont(132);
   axesEj->GetZaxis()->SetLabelFont(132);
   axesEj->GetZaxis()->SetLabelSize(0.03);
   axesEj->GetZaxis()->SetTitleSize(0.036);
   axesEj->GetZaxis()->SetTitleFont(132);
   axesEj->Draw("");
   
   TGraphErrors *gre = new TGraphErrors(27);
   gre->SetName("Graph0");
   gre->SetTitle("Total Confusion");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(2);
   gre->SetPoint(0,15,3.060094);
   gre->SetPointError(0,0,0.1044139);
   gre->SetPoint(1,20,2.852202);
   gre->SetPointError(1,0,0.09016326);
   gre->SetPoint(2,25,2.726752);
   gre->SetPointError(2,0,0.07991335);
   gre->SetPoint(3,30,2.421988);
   gre->SetPointError(3,0,0.07276167);
   gre->SetPoint(4,35,2.269221);
   gre->SetPointError(4,0,0.06722946);
   gre->SetPoint(5,40,2.245929);
   gre->SetPointError(5,0,0.06434797);
   gre->SetPoint(6,45.5,2.280273);
   gre->SetPointError(6,0,0.06265584);
   gre->SetPoint(7,50,2.150757);
   gre->SetPointError(7,0,0.06063442);
   gre->SetPoint(8,55,2.207421);
   gre->SetPointError(8,0,0.05788299);
   gre->SetPoint(9,60,2.065654);
   gre->SetPointError(9,0,0.05575366);
   gre->SetPoint(10,65,2.177608);
   gre->SetPointError(10,0,0.05375342);
   gre->SetPoint(11,70,1.978883);
   gre->SetPointError(11,0,0.05186821);
   gre->SetPoint(12,75,2.161262);
   gre->SetPointError(12,0,0.05133189);
   gre->SetPoint(13,80,2.122086);
   gre->SetPointError(13,0,0.05021356);
   gre->SetPoint(14,85,2.134353);
   gre->SetPointError(14,0,0.04958319);
   gre->SetPoint(15,90,2.160258);
   gre->SetPointError(15,0,0.04855278);
   gre->SetPoint(16,95,2.081461);
   gre->SetPointError(16,0,0.04884738);
   gre->SetPoint(17,100,2.132059);
   gre->SetPointError(17,0,0.04858918);
   gre->SetPoint(18,110,2.176192);
   gre->SetPointError(18,0,0.04724313);
   gre->SetPoint(19,120,2.189175);
   gre->SetPointError(19,0,0.04671719);
   gre->SetPoint(20,130,2.143888);
   gre->SetPointError(20,0,0.0456606);
   gre->SetPoint(21,140,2.311878);
   gre->SetPointError(21,0,0.04608344);
   gre->SetPoint(22,150,2.284531);
   gre->SetPointError(22,0,0.04590269);
   gre->SetPoint(23,175,2.409349);
   gre->SetPointError(23,0,0.05435734);
   gre->SetPoint(24,200,2.477785);
   gre->SetPointError(24,0,0.04616105);
   gre->SetPoint(25,225,2.433828);
   gre->SetPointError(25,0,0.0730792);
   gre->SetPoint(26,250,2.713582);
   gre->SetPointError(26,0,0.05386243);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","Total Confusion",100,0,273.5);
   Graph_Graph1->SetMinimum(1.803266);
   Graph_Graph1->SetMaximum(3.288257);
   Graph_Graph1->SetDirectory(0);
   Graph_Graph1->SetStats(0);
   Graph_Graph1->SetLineWidth(2);
   Graph_Graph1->SetMarkerStyle(20);
   Graph_Graph1->GetXaxis()->SetNdivisions(505);
   Graph_Graph1->GetXaxis()->SetLabelFont(132);
   Graph_Graph1->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph1->GetXaxis()->SetTitleSize(0.036);
   Graph_Graph1->GetXaxis()->SetTitleFont(132);
   Graph_Graph1->GetYaxis()->SetLabelFont(132);
   Graph_Graph1->GetYaxis()->SetLabelSize(0.03);
   Graph_Graph1->GetYaxis()->SetTitleSize(0.036);
   Graph_Graph1->GetYaxis()->SetTitleFont(132);
   Graph_Graph1->GetZaxis()->SetLabelFont(132);
   Graph_Graph1->GetZaxis()->SetLabelSize(0.03);
   Graph_Graph1->GetZaxis()->SetTitleSize(0.036);
   Graph_Graph1->GetZaxis()->SetTitleFont(132);
   gre->SetHistogram(Graph_Graph1);
   
   gre->Draw("lp,");
   
   gre = new TGraphErrors(27);
   gre->SetName("Graph1");
   gre->SetTitle("Photon Confusion");

   ci = TColor::GetColor("#ffcc00");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#ffcc00");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(2);
   gre->SetPoint(0,15,0.9815875);
   gre->SetPointError(0,0,0.1107659);
   gre->SetPoint(1,20,0.7279178);
   gre->SetPointError(1,0,0.09690589);
   gre->SetPoint(2,25,0.6211168);
   gre->SetPointError(2,0,0.08677995);
   gre->SetPoint(3,30,0.7464384);
   gre->SetPointError(3,0,0.07849538);
   gre->SetPoint(4,35,0.7441218);
   gre->SetPointError(4,0,0.07258285);
   gre->SetPoint(5,40,0.5664583);
   gre->SetPointError(5,0,0.07007471);
   gre->SetPoint(6,45.5,0.6707151);
   gre->SetPointError(6,0,0.06851893);
   gre->SetPoint(7,50,0.6320145);
   gre->SetPointError(7,0,0.06609889);
   gre->SetPoint(8,55,0.4642121);
   gre->SetPointError(8,0,0.06414397);
   gre->SetPoint(9,60,0.618831);
   gre->SetPointError(9,0,0.06123789);
   gre->SetPoint(10,65,0.614243);
   gre->SetPointError(10,0,0.05998151);
   gre->SetPoint(11,70,0.6752208);
   gre->SetPointError(11,0,0.05708465);
   gre->SetPoint(12,75,0.7209873);
   gre->SetPointError(12,0,0.05754659);
   gre->SetPoint(13,80,0.7321136);
   gre->SetPointError(13,0,0.05629864);
   gre->SetPoint(14,85,0.4658808);
   gre->SetPointError(14,0,0.05630054);
   gre->SetPoint(15,90,0.6079009);
   gre->SetPointError(15,0,0.05532627);
   gre->SetPoint(16,95,0.7766926);
   gre->SetPointError(16,0,0.054816);
   gre->SetPoint(17,100,0.684683);
   gre->SetPointError(17,0,0.05504176);
   gre->SetPoint(18,110,0.8152705);
   gre->SetPointError(18,0,0.05384381);
   gre->SetPoint(19,120,0.9360391);
   gre->SetPointError(19,0,0.05310337);
   gre->SetPoint(20,130,0.7847617);
   gre->SetPointError(20,0,0.05236766);
   gre->SetPoint(21,140,1.023934);
   gre->SetPointError(21,0,0.05322383);
   gre->SetPoint(22,150,0.9437738);
   gre->SetPointError(22,0,0.05308514);
   gre->SetPoint(23,175,1.109042);
   gre->SetPointError(23,0,0.06331544);
   gre->SetPoint(24,200,0.991559);
   gre->SetPointError(24,0,0.05454401);
   gre->SetPoint(25,224.8922,1.096252);
   gre->SetPointError(25,0,0.08547296);
   gre->SetPoint(26,250,1.304816);
   gre->SetPointError(26,0,0.06367555);
   
   TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","Photon Confusion",100,0,273.5);
   Graph_Graph2->SetMinimum(0.3032257);
   Graph_Graph2->SetMaximum(1.465334);
   Graph_Graph2->SetDirectory(0);
   Graph_Graph2->SetStats(0);
   Graph_Graph2->SetLineWidth(2);
   Graph_Graph2->SetMarkerStyle(20);
   Graph_Graph2->GetXaxis()->SetNdivisions(505);
   Graph_Graph2->GetXaxis()->SetLabelFont(132);
   Graph_Graph2->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph2->GetXaxis()->SetTitleSize(0.036);
   Graph_Graph2->GetXaxis()->SetTitleFont(132);
   Graph_Graph2->GetYaxis()->SetLabelFont(132);
   Graph_Graph2->GetYaxis()->SetLabelSize(0.03);
   Graph_Graph2->GetYaxis()->SetTitleSize(0.036);
   Graph_Graph2->GetYaxis()->SetTitleFont(132);
   Graph_Graph2->GetZaxis()->SetLabelFont(132);
   Graph_Graph2->GetZaxis()->SetLabelSize(0.03);
   Graph_Graph2->GetZaxis()->SetTitleSize(0.036);
   Graph_Graph2->GetZaxis()->SetTitleFont(132);
   gre->SetHistogram(Graph_Graph2);
   
   gre->Draw("LP,");
   
   gre = new TGraphErrors(27);
   gre->SetName("Graph2");
   gre->SetTitle("Neutral Hadron Confusion");
   gre->SetLineColor(8);
   gre->SetLineWidth(2);
   gre->SetMarkerColor(8);
   gre->SetMarkerStyle(2);
   gre->SetPoint(0,15,1.36613);
   gre->SetPointError(0,0,0.1086664);
   gre->SetPoint(1,20,1.299462);
   gre->SetPointError(1,0,0.09498473);
   gre->SetPoint(2,25,1.204125);
   gre->SetPointError(2,0,0.08504324);
   gre->SetPoint(3,30,1.329233);
   gre->SetPointError(3,0,0.07603829);
   gre->SetPoint(4,35,1.241004);
   gre->SetPointError(4,0,0.07019351);
   gre->SetPoint(5,40,1.393384);
   gre->SetPointError(5,0,0.06739105);
   gre->SetPoint(6,45.5,1.365198);
   gre->SetPointError(6,0,0.06572882);
   gre->SetPoint(7,50,1.27935);
   gre->SetPointError(7,0,0.06352486);
   gre->SetPoint(8,55,1.506768);
   gre->SetPointError(8,0,0.06088046);
   gre->SetPoint(9,60,1.40502);
   gre->SetPointError(9,0,0.05797119);
   gre->SetPoint(10,65,1.47813);
   gre->SetPointError(10,0,0.05640817);
   gre->SetPoint(11,70,1.385894);
   gre->SetPointError(11,0,0.05355671);
   gre->SetPoint(12,75,1.497109);
   gre->SetPointError(12,0,0.05349403);
   gre->SetPoint(13,80,1.426265);
   gre->SetPointError(13,0,0.05243761);
   gre->SetPoint(14,85,1.566804);
   gre->SetPointError(14,0,0.05226686);
   gre->SetPoint(15,90,1.509634);
   gre->SetPointError(15,0,0.05125758);
   gre->SetPoint(16,95,1.532474);
   gre->SetPointError(16,0,0.05015054);
   gre->SetPoint(17,100,1.602865);
   gre->SetPointError(17,0,0.05031174);
   gre->SetPoint(18,110,1.530109);
   gre->SetPointError(18,0,0.04905651);
   gre->SetPoint(19,120,1.565372);
   gre->SetPointError(19,0,0.04773387);
   gre->SetPoint(20,130,1.581786);
   gre->SetPointError(20,0,0.04719539);
   gre->SetPoint(21,140,1.574344);
   gre->SetPointError(21,0,0.04744107);
   gre->SetPoint(22,150,1.685214);
   gre->SetPointError(22,0,0.04695991);
   gre->SetPoint(23,175,1.667449);
   gre->SetPointError(23,0,0.05554119);
   gre->SetPoint(24,200,1.752156);
   gre->SetPointError(24,0,0.04807728);
   gre->SetPoint(25,224.8922,1.719963);
   gre->SetPointError(25,0,0.07480635);
   gre->SetPoint(26,250,1.716922);
   gre->SetPointError(26,0,0.05574123);
   
   TH1F *Graph_Graph3 = new TH1F("Graph_Graph3","Neutral Hadron Confusion",100,0,273.5);
   Graph_Graph3->SetMinimum(1.050967);
   Graph_Graph3->SetMaximum(1.868349);
   Graph_Graph3->SetDirectory(0);
   Graph_Graph3->SetStats(0);
   Graph_Graph3->SetLineWidth(2);
   Graph_Graph3->SetMarkerStyle(20);
   Graph_Graph3->GetXaxis()->SetNdivisions(505);
   Graph_Graph3->GetXaxis()->SetLabelFont(132);
   Graph_Graph3->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph3->GetXaxis()->SetTitleSize(0.036);
   Graph_Graph3->GetXaxis()->SetTitleFont(132);
   Graph_Graph3->GetYaxis()->SetLabelFont(132);
   Graph_Graph3->GetYaxis()->SetLabelSize(0.03);
   Graph_Graph3->GetYaxis()->SetTitleSize(0.036);
   Graph_Graph3->GetYaxis()->SetTitleFont(132);
   Graph_Graph3->GetZaxis()->SetLabelFont(132);
   Graph_Graph3->GetZaxis()->SetLabelSize(0.03);
   Graph_Graph3->GetZaxis()->SetTitleSize(0.036);
   Graph_Graph3->GetZaxis()->SetTitleFont(132);
   gre->SetHistogram(Graph_Graph3);
   
   gre->Draw("lp,");
   
   gre = new TGraphErrors(27);
   gre->SetName("Graph3");
   gre->SetTitle("Other Confusion");

   ci = TColor::GetColor("#ff00ff");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#ff00ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(2);
   gre->SetPoint(0,15,2.556237);
   gre->SetPointError(0,0,0.1021857);
   gre->SetPoint(1,20,2.432405);
   gre->SetPointError(1,0,0.0881004);
   gre->SetPoint(2,25,2.366321);
   gre->SetPointError(2,0,0.0780267);
   gre->SetPoint(3,30,1.882019);
   gre->SetPointError(3,0,0.07010438);
   gre->SetPoint(4,35,1.748015);
   gre->SetPointError(4,0,0.0646441);
   gre->SetPoint(5,40,1.667873);
   gre->SetPointError(5,0,0.06141717);
   gre->SetPoint(6,45.5,1.69883);
   gre->SetPointError(6,0,0.05959105);
   gre->SetPoint(7,50,1.609217);
   gre->SetPointError(7,0,0.05781768);
   gre->SetPoint(8,55,1.544948);
   gre->SetPointError(8,0,0.05424806);
   gre->SetPoint(9,60,1.381989);
   gre->SetPointError(9,0,0.05214555);
   gre->SetPoint(10,65,1.476419);
   gre->SetPointError(10,0,0.04973627);
   gre->SetPoint(11,70,1.240707);
   gre->SetPointError(11,0,0.04795697);
   gre->SetPoint(12,75,1.381989);
   gre->SetPointError(12,0,0.04674202);
   gre->SetPoint(13,80,1.390333);
   gre->SetPointError(13,0,0.04584139);
   gre->SetPoint(14,85,1.372423);
   gre->SetPointError(14,0,0.04494767);
   gre->SetPoint(15,90,1.420625);
   gre->SetPointError(15,0,0.04385974);
   gre->SetPoint(16,95,1.175055);
   gre->SetPointError(16,0,0.04354671);
   gre->SetPoint(17,100,1.227888);
   gre->SetPointError(17,0,0.04315891);
   gre->SetPoint(18,110,1.31526);
   gre->SetPointError(18,0,0.04170379);
   gre->SetPoint(19,120,1.210756);
   gre->SetPointError(19,0,0.04050889);
   gre->SetPoint(20,130,1.215877);
   gre->SetPointError(20,0,0.03962069);
   gre->SetPoint(21,140,1.348251);
   gre->SetPointError(21,0,0.03926289);
   gre->SetPoint(22,150,1.220011);
   gre->SetPointError(22,0,0.03865581);
   gre->SetPoint(23,175,1.339628);
   gre->SetPointError(23,0,0.04506307);
   gre->SetPoint(24,200,1.444361);
   gre->SetPointError(24,0,0.03830446);
   gre->SetPoint(25,224.8922,1.349965);
   gre->SetPointError(25,0,0.06025796);
   gre->SetPoint(26,250,1.647167);
   gre->SetPointError(26,0,0.04420007);
   
   TH1F *Graph_Graph4 = new TH1F("Graph_Graph4","Other Confusion",100,0,273.5);
   Graph_Graph4->SetMinimum(0.9788172);
   Graph_Graph4->SetMaximum(2.811115);
   Graph_Graph4->SetDirectory(0);
   Graph_Graph4->SetStats(0);
   Graph_Graph4->SetLineWidth(2);
   Graph_Graph4->SetMarkerStyle(20);
   Graph_Graph4->GetXaxis()->SetNdivisions(505);
   Graph_Graph4->GetXaxis()->SetLabelFont(132);
   Graph_Graph4->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph4->GetXaxis()->SetTitleSize(0.036);
   Graph_Graph4->GetXaxis()->SetTitleFont(132);
   Graph_Graph4->GetYaxis()->SetLabelFont(132);
   Graph_Graph4->GetYaxis()->SetLabelSize(0.03);
   Graph_Graph4->GetYaxis()->SetTitleSize(0.036);
   Graph_Graph4->GetYaxis()->SetTitleFont(132);
   Graph_Graph4->GetZaxis()->SetLabelFont(132);
   Graph_Graph4->GetZaxis()->SetLabelSize(0.03);
   Graph_Graph4->GetZaxis()->SetTitleSize(0.036);
   Graph_Graph4->GetZaxis()->SetTitleFont(132);
   gre->SetHistogram(Graph_Graph4);
   
   gre->Draw("lp,");
   
   TLegend *leg = new TLegend(0.1810345,0.6849894,0.8850575,0.8668076,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Graph0","Total Confusion","lpf");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(2);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("Graph1","Photon Confusion","lpf");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ffcc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#ffcc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(2);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("Graph2","Neutral Hadron Confusion","lpf");
   entry->SetFillStyle(1001);
   entry->SetLineColor(8);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(8);
   entry->SetMarkerStyle(2);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("Graph3","Other Confusion","lpf");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff00ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#ff00ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(2);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   leg->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
