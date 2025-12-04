{

  ifstream file("gausexp.dat");
  std::vector<double> x,n;
  double x_tmp,n_tmp;
  while (file >> x_tmp >> n_tmp){
    x.push_back(x_tmp);
    n.push_back(n_tmp);
  }
  double dx   = x[1]-x[0];
  int nbin    = x.size();
  double xmin = x[0]-dx/2;
  double xmax = x[x.size()-1]+dx/2;

  TH1D h("h","",nbin,xmin,xmax);

  int i=1;
  for (auto xn: n)
    h.SetBinContent(i++,xn);

  h.SetMarkerStyle(20);
  h.Draw("PE");
  h.SetMinimum(0);
  

}
