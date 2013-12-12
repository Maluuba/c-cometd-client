#ifndef COMETD_MSG_H
#define COMETD_MSG_H

#include "cometd.h"

#define COMETD_MSG_ID_FIELD           "id"
#define COMETD_MSG_DATA_FIELD         "data"
#define COMETD_MSG_CLIENT_ID_FIELD    "clientId"
#define COMETD_MSG_CHANNEL_FIELD      "channel"
#define COMETD_MSG_VERSION_FIELD      "version"
#define COMETD_MSG_MIN_VERSION_FIELD  "minimumVersion"
#define COMETD_MSG_ADVICE_FIELD       "advice"
#define COMETD_MSG_SUBSCRIPTION_FIELD "subscription"
#define COMETD_MSG_SUCCESSFUL_FIELD   "successful"

gboolean       cometd_msg_is_successful (JsonNode* node);
gboolean       cometd_msg_has_data      (JsonNode* node);
const gchar*   cometd_msg_get_channel   (JsonNode* node);
gchar*         cometd_msg_client_id     (JsonNode* node);
GList*         cometd_msg_supported_connection_types(JsonNode* node);
cometd_advice* cometd_msg_advice        (JsonNode* node);

#endif // COMETD_MSG_H