#include "mediator.h"

using namespace std;

int main()
{
    HouseMediator *mediator = new HouseMediator();
    Landlord *host = new Landlord();
    host->setMediator(mediator);
    Renter *client = new Renter();
    client->setMediator(mediator);
    mediator->setRenter(client);
    mediator->setLandlord(host);
    client->sendMessage("我要租房子!");
    host->sendMessage("有房子要出租!");

    return 0;
}