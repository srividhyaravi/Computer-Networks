BEGIN{
ntcp1=0;
ntcp2=0;
tcp1size=0;
tcp2size=0;
totaltcp1=0;
totaltcp2=0;
}
{
event=$1;
pkttype=$5;
pktsize=$6;
fromnode=$9;
tonode=$10;
if(event=="r" && pkttype =="tcp" && fromnode =="0.0" && tonode =="3.0")
{
ntcp1++;
tcp1size=pktsize;
}
if(event=="r" && pkttype =="tcp" && fromnode =="1.0" && tonode =="3.1")
{
ntcp2++;
tcp2size=pktsize;
}
}
END{
totaltcp1=ntcp1*tcp1size*8;
totaltcp2=ntcp2*tcp2size*8;
throughput11=totaltcp1/24;
throughput12=totaltcp2/24;
printf("ftp is : %d", throughput11);
printf("telnet is : %d", throughput12);
}
