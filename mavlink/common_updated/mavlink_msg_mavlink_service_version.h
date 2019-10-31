#pragma once
// MESSAGE MAVLINK_SERVICE_VERSION PACKING

#define MAVLINK_MSG_ID_MAVLINK_SERVICE_VERSION 391

MAVPACKED(
typedef struct __mavlink_mavlink_service_version_t {
 uint64_t service_flags; /*<  Flags*/
 uint16_t service_id; /*<  ID of the service in question.*/
 uint16_t selected_version; /*<  Selected version*/
 uint8_t target_system; /*<  System ID of requesting component*/
 uint8_t target_component; /*<  Component ID of requesting system.*/
}) mavlink_mavlink_service_version_t;

#define MAVLINK_MSG_ID_MAVLINK_SERVICE_VERSION_LEN 14
#define MAVLINK_MSG_ID_MAVLINK_SERVICE_VERSION_MIN_LEN 14
#define MAVLINK_MSG_ID_391_LEN 14
#define MAVLINK_MSG_ID_391_MIN_LEN 14

#define MAVLINK_MSG_ID_MAVLINK_SERVICE_VERSION_CRC 159
#define MAVLINK_MSG_ID_391_CRC 159



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_MAVLINK_SERVICE_VERSION { \
    391, \
    "MAVLINK_SERVICE_VERSION", \
    5, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 12, offsetof(mavlink_mavlink_service_version_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 13, offsetof(mavlink_mavlink_service_version_t, target_component) }, \
         { "service_id", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_mavlink_service_version_t, service_id) }, \
         { "selected_version", NULL, MAVLINK_TYPE_UINT16_T, 0, 10, offsetof(mavlink_mavlink_service_version_t, selected_version) }, \
         { "service_flags", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_mavlink_service_version_t, service_flags) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_MAVLINK_SERVICE_VERSION { \
    "MAVLINK_SERVICE_VERSION", \
    5, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 12, offsetof(mavlink_mavlink_service_version_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 13, offsetof(mavlink_mavlink_service_version_t, target_component) }, \
         { "service_id", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_mavlink_service_version_t, service_id) }, \
         { "selected_version", NULL, MAVLINK_TYPE_UINT16_T, 0, 10, offsetof(mavlink_mavlink_service_version_t, selected_version) }, \
         { "service_flags", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_mavlink_service_version_t, service_flags) }, \
         } \
}
#endif

/**
 * @brief Pack a mavlink_service_version message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_system  System ID of requesting component
 * @param target_component  Component ID of requesting system.
 * @param service_id  ID of the service in question.
 * @param selected_version  Selected version
 * @param service_flags  Flags
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_mavlink_service_version_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t target_system, uint8_t target_component, uint16_t service_id, uint16_t selected_version, uint64_t service_flags)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MAVLINK_SERVICE_VERSION_LEN];
    _mav_put_uint64_t(buf, 0, service_flags);
    _mav_put_uint16_t(buf, 8, service_id);
    _mav_put_uint16_t(buf, 10, selected_version);
    _mav_put_uint8_t(buf, 12, target_system);
    _mav_put_uint8_t(buf, 13, target_component);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_MAVLINK_SERVICE_VERSION_LEN);
#else
    mavlink_mavlink_service_version_t packet;
    packet.service_flags = service_flags;
    packet.service_id = service_id;
    packet.selected_version = selected_version;
    packet.target_system = target_system;
    packet.target_component = target_component;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_MAVLINK_SERVICE_VERSION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_MAVLINK_SERVICE_VERSION;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_MAVLINK_SERVICE_VERSION_MIN_LEN, MAVLINK_MSG_ID_MAVLINK_SERVICE_VERSION_LEN, MAVLINK_MSG_ID_MAVLINK_SERVICE_VERSION_CRC);
}

/**
 * @brief Pack a mavlink_service_version message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param target_system  System ID of requesting component
 * @param target_component  Component ID of requesting system.
 * @param service_id  ID of the service in question.
 * @param selected_version  Selected version
 * @param service_flags  Flags
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_mavlink_service_version_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t target_system,uint8_t target_component,uint16_t service_id,uint16_t selected_version,uint64_t service_flags)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MAVLINK_SERVICE_VERSION_LEN];
    _mav_put_uint64_t(buf, 0, service_flags);
    _mav_put_uint16_t(buf, 8, service_id);
    _mav_put_uint16_t(buf, 10, selected_version);
    _mav_put_uint8_t(buf, 12, target_system);
    _mav_put_uint8_t(buf, 13, target_component);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_MAVLINK_SERVICE_VERSION_LEN);
#else
    mavlink_mavlink_service_version_t packet;
    packet.service_flags = service_flags;
    packet.service_id = service_id;
    packet.selected_version = selected_version;
    packet.target_system = target_system;
    packet.target_component = target_component;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_MAVLINK_SERVICE_VERSION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_MAVLINK_SERVICE_VERSION;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_MAVLINK_SERVICE_VERSION_MIN_LEN, MAVLINK_MSG_ID_MAVLINK_SERVICE_VERSION_LEN, MAVLINK_MSG_ID_MAVLINK_SERVICE_VERSION_CRC);
}

/**
 * @brief Encode a mavlink_service_version struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param mavlink_service_version C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_mavlink_service_version_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_mavlink_service_version_t* mavlink_service_version)
{
    return mavlink_msg_mavlink_service_version_pack(system_id, component_id, msg, mavlink_service_version->target_system, mavlink_service_version->target_component, mavlink_service_version->service_id, mavlink_service_version->selected_version, mavlink_service_version->service_flags);
}

/**
 * @brief Encode a mavlink_service_version struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param mavlink_service_version C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_mavlink_service_version_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_mavlink_service_version_t* mavlink_service_version)
{
    return mavlink_msg_mavlink_service_version_pack_chan(system_id, component_id, chan, msg, mavlink_service_version->target_system, mavlink_service_version->target_component, mavlink_service_version->service_id, mavlink_service_version->selected_version, mavlink_service_version->service_flags);
}

/**
 * @brief Send a mavlink_service_version message
 * @param chan MAVLink channel to send the message
 *
 * @param target_system  System ID of requesting component
 * @param target_component  Component ID of requesting system.
 * @param service_id  ID of the service in question.
 * @param selected_version  Selected version
 * @param service_flags  Flags
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_mavlink_service_version_send(mavlink_channel_t chan, uint8_t target_system, uint8_t target_component, uint16_t service_id, uint16_t selected_version, uint64_t service_flags)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MAVLINK_SERVICE_VERSION_LEN];
    _mav_put_uint64_t(buf, 0, service_flags);
    _mav_put_uint16_t(buf, 8, service_id);
    _mav_put_uint16_t(buf, 10, selected_version);
    _mav_put_uint8_t(buf, 12, target_system);
    _mav_put_uint8_t(buf, 13, target_component);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MAVLINK_SERVICE_VERSION, buf, MAVLINK_MSG_ID_MAVLINK_SERVICE_VERSION_MIN_LEN, MAVLINK_MSG_ID_MAVLINK_SERVICE_VERSION_LEN, MAVLINK_MSG_ID_MAVLINK_SERVICE_VERSION_CRC);
#else
    mavlink_mavlink_service_version_t packet;
    packet.service_flags = service_flags;
    packet.service_id = service_id;
    packet.selected_version = selected_version;
    packet.target_system = target_system;
    packet.target_component = target_component;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MAVLINK_SERVICE_VERSION, (const char *)&packet, MAVLINK_MSG_ID_MAVLINK_SERVICE_VERSION_MIN_LEN, MAVLINK_MSG_ID_MAVLINK_SERVICE_VERSION_LEN, MAVLINK_MSG_ID_MAVLINK_SERVICE_VERSION_CRC);
#endif
}

/**
 * @brief Send a mavlink_service_version message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_mavlink_service_version_send_struct(mavlink_channel_t chan, const mavlink_mavlink_service_version_t* mavlink_service_version)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_mavlink_service_version_send(chan, mavlink_service_version->target_system, mavlink_service_version->target_component, mavlink_service_version->service_id, mavlink_service_version->selected_version, mavlink_service_version->service_flags);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MAVLINK_SERVICE_VERSION, (const char *)mavlink_service_version, MAVLINK_MSG_ID_MAVLINK_SERVICE_VERSION_MIN_LEN, MAVLINK_MSG_ID_MAVLINK_SERVICE_VERSION_LEN, MAVLINK_MSG_ID_MAVLINK_SERVICE_VERSION_CRC);
#endif
}

#if MAVLINK_MSG_ID_MAVLINK_SERVICE_VERSION_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_mavlink_service_version_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t target_system, uint8_t target_component, uint16_t service_id, uint16_t selected_version, uint64_t service_flags)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, service_flags);
    _mav_put_uint16_t(buf, 8, service_id);
    _mav_put_uint16_t(buf, 10, selected_version);
    _mav_put_uint8_t(buf, 12, target_system);
    _mav_put_uint8_t(buf, 13, target_component);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MAVLINK_SERVICE_VERSION, buf, MAVLINK_MSG_ID_MAVLINK_SERVICE_VERSION_MIN_LEN, MAVLINK_MSG_ID_MAVLINK_SERVICE_VERSION_LEN, MAVLINK_MSG_ID_MAVLINK_SERVICE_VERSION_CRC);
#else
    mavlink_mavlink_service_version_t *packet = (mavlink_mavlink_service_version_t *)msgbuf;
    packet->service_flags = service_flags;
    packet->service_id = service_id;
    packet->selected_version = selected_version;
    packet->target_system = target_system;
    packet->target_component = target_component;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MAVLINK_SERVICE_VERSION, (const char *)packet, MAVLINK_MSG_ID_MAVLINK_SERVICE_VERSION_MIN_LEN, MAVLINK_MSG_ID_MAVLINK_SERVICE_VERSION_LEN, MAVLINK_MSG_ID_MAVLINK_SERVICE_VERSION_CRC);
#endif
}
#endif

#endif

// MESSAGE MAVLINK_SERVICE_VERSION UNPACKING


/**
 * @brief Get field target_system from mavlink_service_version message
 *
 * @return  System ID of requesting component
 */
static inline uint8_t mavlink_msg_mavlink_service_version_get_target_system(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  12);
}

/**
 * @brief Get field target_component from mavlink_service_version message
 *
 * @return  Component ID of requesting system.
 */
static inline uint8_t mavlink_msg_mavlink_service_version_get_target_component(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  13);
}

/**
 * @brief Get field service_id from mavlink_service_version message
 *
 * @return  ID of the service in question.
 */
static inline uint16_t mavlink_msg_mavlink_service_version_get_service_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  8);
}

/**
 * @brief Get field selected_version from mavlink_service_version message
 *
 * @return  Selected version
 */
static inline uint16_t mavlink_msg_mavlink_service_version_get_selected_version(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  10);
}

/**
 * @brief Get field service_flags from mavlink_service_version message
 *
 * @return  Flags
 */
static inline uint64_t mavlink_msg_mavlink_service_version_get_service_flags(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Decode a mavlink_service_version message into a struct
 *
 * @param msg The message to decode
 * @param mavlink_service_version C-struct to decode the message contents into
 */
static inline void mavlink_msg_mavlink_service_version_decode(const mavlink_message_t* msg, mavlink_mavlink_service_version_t* mavlink_service_version)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_service_version->service_flags = mavlink_msg_mavlink_service_version_get_service_flags(msg);
    mavlink_service_version->service_id = mavlink_msg_mavlink_service_version_get_service_id(msg);
    mavlink_service_version->selected_version = mavlink_msg_mavlink_service_version_get_selected_version(msg);
    mavlink_service_version->target_system = mavlink_msg_mavlink_service_version_get_target_system(msg);
    mavlink_service_version->target_component = mavlink_msg_mavlink_service_version_get_target_component(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_MAVLINK_SERVICE_VERSION_LEN? msg->len : MAVLINK_MSG_ID_MAVLINK_SERVICE_VERSION_LEN;
        memset(mavlink_service_version, 0, MAVLINK_MSG_ID_MAVLINK_SERVICE_VERSION_LEN);
    memcpy(mavlink_service_version, _MAV_PAYLOAD(msg), len);
#endif
}
