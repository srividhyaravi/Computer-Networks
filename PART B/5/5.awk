BEGIN{
DCOUNT=0;
}

{
if($1=="d")
{
DCOUNT++;
}
}

END{
printf("No of packets dropped: %d",DCOUNT);
}
