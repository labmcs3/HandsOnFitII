{
  ifstream file("gausexp.dat");

  std::vector<double> x,n;
  double x_tmp,n_tmp;
  while (file >> x_tmp >> n_tmp){
    x.push_back(x_tmp);
    n.push_back(n_tmp);
  }
  double dx   = x[1]-x[0];
  double xmin = x[0]-dx/2;
  double xmax = x[x.size()-1]+dx/2;

  TCanvas c("c","",5,5,600,600);
  TH1D h("h","",x.size(),xmin,xmax);
  for (int i=0;i<n.size();i++)
    h.SetBinContent(i+1,n[i]);
  
  h.SetMarkerStyle(20);
  h.Draw("PE");
  h.SetMinimum(0);

}
