#include "Mylang.h"
start();
read(var(0));
read(var(1));
ltto(var(0),0,end);
ltto(var(1),0,end);
addvar(var(2),0,0);
say(var(0));
say("+");
say(var(1));
say("=");
addvar(var(2),var(0),var(1));
say(var(2));
say("\n");
addvar(var(2),0,0);
say(var(0));
say("-");
say(var(1));
say("=");
addvar(var(2),var(0),-var(1));
say(var(2));
say("\n");
addvar(var(2),0,0);
addvar(var(3),var(0),0);
say(var(0));
say("x");
say(var(1));
say("=");
to(up1);
addvar(var(2),var(2),var(1));
addvar(var(3),var(3),-1);
ltto(0,var(3),up1);
say(var(2));
say("\n");
addvar(var(2),0,0);
addvar(var(3),0,0);
say(var(0));
say("/");
say(var(1));
say("=");
ltto(var(0),var(1),down);
to(up2);
addvar(var(0),var(0),-var(1));
addvar(var(2),var(2),1);
addvar(var(3),var(1),-1)
ltto(var(3),var(0),up2);
to(down);
say(var(2));
say("\n");
to(end);
end();
