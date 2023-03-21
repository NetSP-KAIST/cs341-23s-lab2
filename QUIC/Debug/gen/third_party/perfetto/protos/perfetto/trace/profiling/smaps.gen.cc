#include "perfetto/protozero/gen_field_helpers.h"
#include "perfetto/protozero/message.h"
#include "perfetto/protozero/packed_repeated_fields.h"
#include "perfetto/protozero/proto_decoder.h"
#include "perfetto/protozero/scattered_heap_buffer.h"
// DO NOT EDIT. Autogenerated by Perfetto cppgen_plugin
#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wfloat-equal"
#endif
#include "protos/perfetto/trace/profiling/smaps.gen.h"

namespace perfetto {
namespace protos {
namespace gen {

SmapsPacket::SmapsPacket() = default;
SmapsPacket::~SmapsPacket() = default;
SmapsPacket::SmapsPacket(const SmapsPacket&) = default;
SmapsPacket& SmapsPacket::operator=(const SmapsPacket&) = default;
SmapsPacket::SmapsPacket(SmapsPacket&&) noexcept = default;
SmapsPacket& SmapsPacket::operator=(SmapsPacket&&) = default;

bool SmapsPacket::operator==(const SmapsPacket& other) const {
  return unknown_fields_ == other.unknown_fields_
   && pid_ == other.pid_
   && entries_ == other.entries_;
}

int SmapsPacket::entries_size() const { return static_cast<int>(entries_.size()); }
void SmapsPacket::clear_entries() { entries_.clear(); }
SmapsEntry* SmapsPacket::add_entries() { entries_.emplace_back(); return &entries_.back(); }
bool SmapsPacket::ParseFromArray(const void* raw, size_t size) {
  entries_.clear();
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* pid */:
        field.get(&pid_);
        break;
      case 2 /* entries */:
        entries_.emplace_back();
        entries_.back().ParseFromArray(field.data(), field.size());
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string SmapsPacket::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> SmapsPacket::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void SmapsPacket::Serialize(::protozero::Message* msg) const {
  // Field 1: pid
  if (_has_field_[1]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(1, pid_, msg);
  }

  // Field 2: entries
  for (auto& it : entries_) {
    it.Serialize(msg->BeginNestedMessage<::protozero::Message>(2));
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}


SmapsEntry::SmapsEntry() = default;
SmapsEntry::~SmapsEntry() = default;
SmapsEntry::SmapsEntry(const SmapsEntry&) = default;
SmapsEntry& SmapsEntry::operator=(const SmapsEntry&) = default;
SmapsEntry::SmapsEntry(SmapsEntry&&) noexcept = default;
SmapsEntry& SmapsEntry::operator=(SmapsEntry&&) = default;

bool SmapsEntry::operator==(const SmapsEntry& other) const {
  return unknown_fields_ == other.unknown_fields_
   && path_ == other.path_
   && size_kb_ == other.size_kb_
   && private_dirty_kb_ == other.private_dirty_kb_
   && swap_kb_ == other.swap_kb_
   && file_name_ == other.file_name_
   && start_address_ == other.start_address_
   && module_timestamp_ == other.module_timestamp_
   && module_debugid_ == other.module_debugid_
   && module_debug_path_ == other.module_debug_path_
   && protection_flags_ == other.protection_flags_
   && private_clean_resident_kb_ == other.private_clean_resident_kb_
   && shared_dirty_resident_kb_ == other.shared_dirty_resident_kb_
   && shared_clean_resident_kb_ == other.shared_clean_resident_kb_
   && locked_kb_ == other.locked_kb_
   && proportional_resident_kb_ == other.proportional_resident_kb_;
}

bool SmapsEntry::ParseFromArray(const void* raw, size_t size) {
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* path */:
        ::protozero::internal::gen_helpers::DeserializeString(field, &path_);
        break;
      case 2 /* size_kb */:
        field.get(&size_kb_);
        break;
      case 3 /* private_dirty_kb */:
        field.get(&private_dirty_kb_);
        break;
      case 4 /* swap_kb */:
        field.get(&swap_kb_);
        break;
      case 5 /* file_name */:
        ::protozero::internal::gen_helpers::DeserializeString(field, &file_name_);
        break;
      case 6 /* start_address */:
        field.get(&start_address_);
        break;
      case 7 /* module_timestamp */:
        field.get(&module_timestamp_);
        break;
      case 8 /* module_debugid */:
        ::protozero::internal::gen_helpers::DeserializeString(field, &module_debugid_);
        break;
      case 9 /* module_debug_path */:
        ::protozero::internal::gen_helpers::DeserializeString(field, &module_debug_path_);
        break;
      case 10 /* protection_flags */:
        field.get(&protection_flags_);
        break;
      case 11 /* private_clean_resident_kb */:
        field.get(&private_clean_resident_kb_);
        break;
      case 12 /* shared_dirty_resident_kb */:
        field.get(&shared_dirty_resident_kb_);
        break;
      case 13 /* shared_clean_resident_kb */:
        field.get(&shared_clean_resident_kb_);
        break;
      case 14 /* locked_kb */:
        field.get(&locked_kb_);
        break;
      case 15 /* proportional_resident_kb */:
        field.get(&proportional_resident_kb_);
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string SmapsEntry::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> SmapsEntry::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void SmapsEntry::Serialize(::protozero::Message* msg) const {
  // Field 1: path
  if (_has_field_[1]) {
    ::protozero::internal::gen_helpers::SerializeString(1, path_, msg);
  }

  // Field 2: size_kb
  if (_has_field_[2]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(2, size_kb_, msg);
  }

  // Field 3: private_dirty_kb
  if (_has_field_[3]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(3, private_dirty_kb_, msg);
  }

  // Field 4: swap_kb
  if (_has_field_[4]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(4, swap_kb_, msg);
  }

  // Field 5: file_name
  if (_has_field_[5]) {
    ::protozero::internal::gen_helpers::SerializeString(5, file_name_, msg);
  }

  // Field 6: start_address
  if (_has_field_[6]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(6, start_address_, msg);
  }

  // Field 7: module_timestamp
  if (_has_field_[7]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(7, module_timestamp_, msg);
  }

  // Field 8: module_debugid
  if (_has_field_[8]) {
    ::protozero::internal::gen_helpers::SerializeString(8, module_debugid_, msg);
  }

  // Field 9: module_debug_path
  if (_has_field_[9]) {
    ::protozero::internal::gen_helpers::SerializeString(9, module_debug_path_, msg);
  }

  // Field 10: protection_flags
  if (_has_field_[10]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(10, protection_flags_, msg);
  }

  // Field 11: private_clean_resident_kb
  if (_has_field_[11]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(11, private_clean_resident_kb_, msg);
  }

  // Field 12: shared_dirty_resident_kb
  if (_has_field_[12]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(12, shared_dirty_resident_kb_, msg);
  }

  // Field 13: shared_clean_resident_kb
  if (_has_field_[13]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(13, shared_clean_resident_kb_, msg);
  }

  // Field 14: locked_kb
  if (_has_field_[14]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(14, locked_kb_, msg);
  }

  // Field 15: proportional_resident_kb
  if (_has_field_[15]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(15, proportional_resident_kb_, msg);
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}

}  // namespace perfetto
}  // namespace protos
}  // namespace gen
#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic pop
#endif
