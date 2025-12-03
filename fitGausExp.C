{

  ifstream file("gausexp.dat");
  double min=100;
  double max=160;
  TH1D h("h","",30,min,max);
  double val1,val2;
  int i=1;
  while (file >> val1 >> val2){
    h.SetBinContent(i++,val2);
  }

  h.SetMarkerStyle(20);
  h.Draw("PE");
  h.SetMinimum(0);
  

}
