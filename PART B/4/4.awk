BEGIN{
dcount=0;
}
{
if($1=="d")
{
dcount++;
}
}

END{
printf("No of packets dropped: %d",dcount)
}
