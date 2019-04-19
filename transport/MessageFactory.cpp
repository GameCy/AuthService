#include "MessageFactory.h"

MessageFactory::MessageFactory()
{

}


google::protobuf::MessageLite *MessageFactory::CreateRequest(RouteEnum route)
{
    switch(route)
    {
    // $$REQUEST-FACTORY$$
    case ROUTE_CreateUser : return new CreateUser; break;
    case ROUTE_Authenticate: return new Authenticate; break;
    // $$REQUEST-FACTORY-END$$
    default:
        return nullptr;
    }
}

google::protobuf::MessageLite *MessageFactory::CreateResponse(RouteEnum route)
{
    switch(route)
    {
    // $$RESPONSE-FACTORY$$
    case ROUTE_CreateUser : return new CommonResponse; break;
    case ROUTE_Authenticate: return new CommonResponse; break;
    // $$RESPONSE-FACTORY-END$$
    default:
        return nullptr;
    }
}
