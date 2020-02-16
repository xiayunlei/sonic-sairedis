#pragma once

#include "swss/redisclient.h"
#include "swss/dbconnector.h"
#include "swss/notificationproducer.h"

#include "SaiSwitch.h"
#include "VirtualOidTranslator.h"
#include "VendorSai.h"

#define VIDTORID                    "VIDTORID"
#define RIDTOVID                    "RIDTOVID"
#define LANES                       "LANES"
#define HIDDEN                      "HIDDEN"
#define COLDVIDS                    "COLDVIDS"

extern std::shared_ptr<syncd::VirtualOidTranslator> g_translator; // TODO move to syncd object
extern std::shared_ptr<swss::NotificationProducer>  notifications;
extern std::shared_ptr<swss::RedisClient>   g_redisClient;
extern std::shared_ptr<swss::DBConnector>   dbAsic;
extern std::string fdbFlushSha;
