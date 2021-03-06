mapping query_requests();
string query_request_info(object who);
object query_prox_target();
void set_prox_target(object who);
void clear_requests();
void add_request(object who, string message);
void remove_request(object who);
void set_pending_action(string new_action, mapping new_args);
string query_pending_action();
mapping query_pending_args();
void set_consent_message(string str);
string query_consent_message();
void add_consent(mixed index, string type);
void remove_consent(mixed index);
void clear_consent();
mapping query_consent();
int check_auto_allow(object who);
int check_auto_deny(object who);
