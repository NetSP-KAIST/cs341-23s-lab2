#include "perfetto/protozero/message.h"
#include "perfetto/protozero/packed_repeated_fields.h"
#include "perfetto/protozero/proto_decoder.h"
#include "perfetto/protozero/scattered_heap_buffer.h"
// DO NOT EDIT. Autogenerated by Perfetto cppgen_plugin
#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wfloat-equal"
#endif
#include "protos/perfetto/trace/android/network_trace.gen.h"

namespace perfetto {
namespace protos {
namespace gen {

NetworkPacketEvent::NetworkPacketEvent() = default;
NetworkPacketEvent::~NetworkPacketEvent() = default;
NetworkPacketEvent::NetworkPacketEvent(const NetworkPacketEvent&) = default;
NetworkPacketEvent& NetworkPacketEvent::operator=(const NetworkPacketEvent&) = default;
NetworkPacketEvent::NetworkPacketEvent(NetworkPacketEvent&&) noexcept = default;
NetworkPacketEvent& NetworkPacketEvent::operator=(NetworkPacketEvent&&) = default;

bool NetworkPacketEvent::operator==(const NetworkPacketEvent& other) const {
  return unknown_fields_ == other.unknown_fields_
   && direction_ == other.direction_
   && interface_ == other.interface_
   && length_ == other.length_
   && uid_ == other.uid_
   && tag_ == other.tag_
   && ip_proto_ == other.ip_proto_
   && tcp_flags_ == other.tcp_flags_
   && local_port_ == other.local_port_
   && remote_port_ == other.remote_port_;
}

bool NetworkPacketEvent::ParseFromArray(const void* raw, size_t size) {
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* direction */:
        field.get(&direction_);
        break;
      case 2 /* interface */:
        field.get(&interface_);
        break;
      case 3 /* length */:
        field.get(&length_);
        break;
      case 4 /* uid */:
        field.get(&uid_);
        break;
      case 5 /* tag */:
        field.get(&tag_);
        break;
      case 6 /* ip_proto */:
        field.get(&ip_proto_);
        break;
      case 7 /* tcp_flags */:
        field.get(&tcp_flags_);
        break;
      case 8 /* local_port */:
        field.get(&local_port_);
        break;
      case 9 /* remote_port */:
        field.get(&remote_port_);
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string NetworkPacketEvent::SerializeAsString() const {
  ::protozero::HeapBuffered<::protozero::Message> msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> NetworkPacketEvent::SerializeAsArray() const {
  ::protozero::HeapBuffered<::protozero::Message> msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void NetworkPacketEvent::Serialize(::protozero::Message* msg) const {
  // Field 1: direction
  if (_has_field_[1]) {
    msg->AppendVarInt(1, direction_);
  }

  // Field 2: interface
  if (_has_field_[2]) {
    msg->AppendString(2, interface_);
  }

  // Field 3: length
  if (_has_field_[3]) {
    msg->AppendVarInt(3, length_);
  }

  // Field 4: uid
  if (_has_field_[4]) {
    msg->AppendVarInt(4, uid_);
  }

  // Field 5: tag
  if (_has_field_[5]) {
    msg->AppendVarInt(5, tag_);
  }

  // Field 6: ip_proto
  if (_has_field_[6]) {
    msg->AppendVarInt(6, ip_proto_);
  }

  // Field 7: tcp_flags
  if (_has_field_[7]) {
    msg->AppendVarInt(7, tcp_flags_);
  }

  // Field 8: local_port
  if (_has_field_[8]) {
    msg->AppendVarInt(8, local_port_);
  }

  // Field 9: remote_port
  if (_has_field_[9]) {
    msg->AppendVarInt(9, remote_port_);
  }

  msg->AppendRawProtoBytes(unknown_fields_.data(), unknown_fields_.size());
}

}  // namespace perfetto
}  // namespace protos
}  // namespace gen
#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic pop
#endif
