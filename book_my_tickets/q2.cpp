#include "ticket.h"

void IPL::bookTicket()
{
    TicketBooking ticket;
    cin >> ticket.fanID >> ticket.fanName;
    cin.ignore();

    int no_of_match = 0;
    cin >> no_of_match;
    cin.ignore();

    while (no_of_match--)
    {
        string match;
        getline(cin, match);
        ticket.matchDetails.push_back(match);
    }

    ticketQueue.push_back(ticket);
}

void IPL::processBooking()
{
    if (ticketQueue.empty())
        return;

    ticketQueue.erase(ticketQueue.begin());
}

void IPL::updateBooking()
{
    string fanid, matchdetails;
    cin >> fanid;
    cin.ignore();

    getline(cin, matchdetails);

    int index = -1;
    for (int i = 0; i < ticketQueue.size(); i++)
        if (ticketQueue[i].fanID == fanid)
        {
            index = i;
            break;
        }

    if (index == -1)
        return;

    ticketQueue[index].matchDetails.push_back(matchdetails);
}