#ifndef MESSAGEFACTORY_H
#define MESSAGEFACTORY_H
#include "messages.pb.h"

enum RouteEnum {
    ROUTE_Null,
    // $$ROUTE-ENUMS$$
    ROUTE_CreateUser,
    ROUTE_Authenticate,
    // $$ROUTE-ENUMS-END$$
    ROUTE_MAXVALUE
};

class MessageFactory
{
public:
    MessageFactory();
    static google::protobuf::MessageLite*  CreateRequest(RouteEnum route);
    static google::protobuf::MessageLite*  CreateResponse(RouteEnum route);

};

#endif // MESSAGEFACTORY_H
