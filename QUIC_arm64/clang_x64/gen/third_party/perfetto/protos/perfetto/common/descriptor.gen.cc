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
#include "protos/perfetto/common/descriptor.gen.h"

namespace perfetto {
namespace protos {
namespace gen {

OneofOptions::OneofOptions() = default;
OneofOptions::~OneofOptions() = default;
OneofOptions::OneofOptions(const OneofOptions&) = default;
OneofOptions& OneofOptions::operator=(const OneofOptions&) = default;
OneofOptions::OneofOptions(OneofOptions&&) noexcept = default;
OneofOptions& OneofOptions::operator=(OneofOptions&&) = default;

bool OneofOptions::operator==(const OneofOptions& other) const {
  return unknown_fields_ == other.unknown_fields_;
}

bool OneofOptions::ParseFromArray(const void* raw, size_t size) {
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string OneofOptions::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> OneofOptions::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void OneofOptions::Serialize(::protozero::Message* msg) const {
  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}


EnumValueDescriptorProto::EnumValueDescriptorProto() = default;
EnumValueDescriptorProto::~EnumValueDescriptorProto() = default;
EnumValueDescriptorProto::EnumValueDescriptorProto(const EnumValueDescriptorProto&) = default;
EnumValueDescriptorProto& EnumValueDescriptorProto::operator=(const EnumValueDescriptorProto&) = default;
EnumValueDescriptorProto::EnumValueDescriptorProto(EnumValueDescriptorProto&&) noexcept = default;
EnumValueDescriptorProto& EnumValueDescriptorProto::operator=(EnumValueDescriptorProto&&) = default;

bool EnumValueDescriptorProto::operator==(const EnumValueDescriptorProto& other) const {
  return unknown_fields_ == other.unknown_fields_
   && name_ == other.name_
   && number_ == other.number_;
}

bool EnumValueDescriptorProto::ParseFromArray(const void* raw, size_t size) {
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* name */:
        ::protozero::internal::gen_helpers::DeserializeString(field, &name_);
        break;
      case 2 /* number */:
        field.get(&number_);
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string EnumValueDescriptorProto::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> EnumValueDescriptorProto::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void EnumValueDescriptorProto::Serialize(::protozero::Message* msg) const {
  // Field 1: name
  if (_has_field_[1]) {
    ::protozero::internal::gen_helpers::SerializeString(1, name_, msg);
  }

  // Field 2: number
  if (_has_field_[2]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(2, number_, msg);
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}


EnumDescriptorProto::EnumDescriptorProto() = default;
EnumDescriptorProto::~EnumDescriptorProto() = default;
EnumDescriptorProto::EnumDescriptorProto(const EnumDescriptorProto&) = default;
EnumDescriptorProto& EnumDescriptorProto::operator=(const EnumDescriptorProto&) = default;
EnumDescriptorProto::EnumDescriptorProto(EnumDescriptorProto&&) noexcept = default;
EnumDescriptorProto& EnumDescriptorProto::operator=(EnumDescriptorProto&&) = default;

bool EnumDescriptorProto::operator==(const EnumDescriptorProto& other) const {
  return unknown_fields_ == other.unknown_fields_
   && name_ == other.name_
   && value_ == other.value_
   && reserved_name_ == other.reserved_name_;
}

int EnumDescriptorProto::value_size() const { return static_cast<int>(value_.size()); }
void EnumDescriptorProto::clear_value() { value_.clear(); }
EnumValueDescriptorProto* EnumDescriptorProto::add_value() { value_.emplace_back(); return &value_.back(); }
bool EnumDescriptorProto::ParseFromArray(const void* raw, size_t size) {
  value_.clear();
  reserved_name_.clear();
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* name */:
        ::protozero::internal::gen_helpers::DeserializeString(field, &name_);
        break;
      case 2 /* value */:
        value_.emplace_back();
        value_.back().ParseFromArray(field.data(), field.size());
        break;
      case 5 /* reserved_name */:
        reserved_name_.emplace_back();
        ::protozero::internal::gen_helpers::DeserializeString(field, &reserved_name_.back());
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string EnumDescriptorProto::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> EnumDescriptorProto::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void EnumDescriptorProto::Serialize(::protozero::Message* msg) const {
  // Field 1: name
  if (_has_field_[1]) {
    ::protozero::internal::gen_helpers::SerializeString(1, name_, msg);
  }

  // Field 2: value
  for (auto& it : value_) {
    it.Serialize(msg->BeginNestedMessage<::protozero::Message>(2));
  }

  // Field 5: reserved_name
  for (auto& it : reserved_name_) {
    ::protozero::internal::gen_helpers::SerializeString(5, it, msg);
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}


OneofDescriptorProto::OneofDescriptorProto() = default;
OneofDescriptorProto::~OneofDescriptorProto() = default;
OneofDescriptorProto::OneofDescriptorProto(const OneofDescriptorProto&) = default;
OneofDescriptorProto& OneofDescriptorProto::operator=(const OneofDescriptorProto&) = default;
OneofDescriptorProto::OneofDescriptorProto(OneofDescriptorProto&&) noexcept = default;
OneofDescriptorProto& OneofDescriptorProto::operator=(OneofDescriptorProto&&) = default;

bool OneofDescriptorProto::operator==(const OneofDescriptorProto& other) const {
  return unknown_fields_ == other.unknown_fields_
   && name_ == other.name_
   && options_ == other.options_;
}

bool OneofDescriptorProto::ParseFromArray(const void* raw, size_t size) {
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* name */:
        ::protozero::internal::gen_helpers::DeserializeString(field, &name_);
        break;
      case 2 /* options */:
        (*options_).ParseFromArray(field.data(), field.size());
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string OneofDescriptorProto::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> OneofDescriptorProto::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void OneofDescriptorProto::Serialize(::protozero::Message* msg) const {
  // Field 1: name
  if (_has_field_[1]) {
    ::protozero::internal::gen_helpers::SerializeString(1, name_, msg);
  }

  // Field 2: options
  if (_has_field_[2]) {
    (*options_).Serialize(msg->BeginNestedMessage<::protozero::Message>(2));
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}


FieldDescriptorProto::FieldDescriptorProto() = default;
FieldDescriptorProto::~FieldDescriptorProto() = default;
FieldDescriptorProto::FieldDescriptorProto(const FieldDescriptorProto&) = default;
FieldDescriptorProto& FieldDescriptorProto::operator=(const FieldDescriptorProto&) = default;
FieldDescriptorProto::FieldDescriptorProto(FieldDescriptorProto&&) noexcept = default;
FieldDescriptorProto& FieldDescriptorProto::operator=(FieldDescriptorProto&&) = default;

bool FieldDescriptorProto::operator==(const FieldDescriptorProto& other) const {
  return unknown_fields_ == other.unknown_fields_
   && name_ == other.name_
   && number_ == other.number_
   && label_ == other.label_
   && type_ == other.type_
   && type_name_ == other.type_name_
   && extendee_ == other.extendee_
   && default_value_ == other.default_value_
   && oneof_index_ == other.oneof_index_;
}

bool FieldDescriptorProto::ParseFromArray(const void* raw, size_t size) {
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* name */:
        ::protozero::internal::gen_helpers::DeserializeString(field, &name_);
        break;
      case 3 /* number */:
        field.get(&number_);
        break;
      case 4 /* label */:
        field.get(&label_);
        break;
      case 5 /* type */:
        field.get(&type_);
        break;
      case 6 /* type_name */:
        ::protozero::internal::gen_helpers::DeserializeString(field, &type_name_);
        break;
      case 2 /* extendee */:
        ::protozero::internal::gen_helpers::DeserializeString(field, &extendee_);
        break;
      case 7 /* default_value */:
        ::protozero::internal::gen_helpers::DeserializeString(field, &default_value_);
        break;
      case 9 /* oneof_index */:
        field.get(&oneof_index_);
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string FieldDescriptorProto::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> FieldDescriptorProto::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void FieldDescriptorProto::Serialize(::protozero::Message* msg) const {
  // Field 1: name
  if (_has_field_[1]) {
    ::protozero::internal::gen_helpers::SerializeString(1, name_, msg);
  }

  // Field 3: number
  if (_has_field_[3]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(3, number_, msg);
  }

  // Field 4: label
  if (_has_field_[4]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(4, label_, msg);
  }

  // Field 5: type
  if (_has_field_[5]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(5, type_, msg);
  }

  // Field 6: type_name
  if (_has_field_[6]) {
    ::protozero::internal::gen_helpers::SerializeString(6, type_name_, msg);
  }

  // Field 2: extendee
  if (_has_field_[2]) {
    ::protozero::internal::gen_helpers::SerializeString(2, extendee_, msg);
  }

  // Field 7: default_value
  if (_has_field_[7]) {
    ::protozero::internal::gen_helpers::SerializeString(7, default_value_, msg);
  }

  // Field 9: oneof_index
  if (_has_field_[9]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(9, oneof_index_, msg);
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}


DescriptorProto::DescriptorProto() = default;
DescriptorProto::~DescriptorProto() = default;
DescriptorProto::DescriptorProto(const DescriptorProto&) = default;
DescriptorProto& DescriptorProto::operator=(const DescriptorProto&) = default;
DescriptorProto::DescriptorProto(DescriptorProto&&) noexcept = default;
DescriptorProto& DescriptorProto::operator=(DescriptorProto&&) = default;

bool DescriptorProto::operator==(const DescriptorProto& other) const {
  return unknown_fields_ == other.unknown_fields_
   && name_ == other.name_
   && field_ == other.field_
   && extension_ == other.extension_
   && nested_type_ == other.nested_type_
   && enum_type_ == other.enum_type_
   && oneof_decl_ == other.oneof_decl_
   && reserved_range_ == other.reserved_range_
   && reserved_name_ == other.reserved_name_;
}

int DescriptorProto::field_size() const { return static_cast<int>(field_.size()); }
void DescriptorProto::clear_field() { field_.clear(); }
FieldDescriptorProto* DescriptorProto::add_field() { field_.emplace_back(); return &field_.back(); }
int DescriptorProto::extension_size() const { return static_cast<int>(extension_.size()); }
void DescriptorProto::clear_extension() { extension_.clear(); }
FieldDescriptorProto* DescriptorProto::add_extension() { extension_.emplace_back(); return &extension_.back(); }
int DescriptorProto::nested_type_size() const { return static_cast<int>(nested_type_.size()); }
void DescriptorProto::clear_nested_type() { nested_type_.clear(); }
DescriptorProto* DescriptorProto::add_nested_type() { nested_type_.emplace_back(); return &nested_type_.back(); }
int DescriptorProto::enum_type_size() const { return static_cast<int>(enum_type_.size()); }
void DescriptorProto::clear_enum_type() { enum_type_.clear(); }
EnumDescriptorProto* DescriptorProto::add_enum_type() { enum_type_.emplace_back(); return &enum_type_.back(); }
int DescriptorProto::oneof_decl_size() const { return static_cast<int>(oneof_decl_.size()); }
void DescriptorProto::clear_oneof_decl() { oneof_decl_.clear(); }
OneofDescriptorProto* DescriptorProto::add_oneof_decl() { oneof_decl_.emplace_back(); return &oneof_decl_.back(); }
int DescriptorProto::reserved_range_size() const { return static_cast<int>(reserved_range_.size()); }
void DescriptorProto::clear_reserved_range() { reserved_range_.clear(); }
DescriptorProto_ReservedRange* DescriptorProto::add_reserved_range() { reserved_range_.emplace_back(); return &reserved_range_.back(); }
bool DescriptorProto::ParseFromArray(const void* raw, size_t size) {
  field_.clear();
  extension_.clear();
  nested_type_.clear();
  enum_type_.clear();
  oneof_decl_.clear();
  reserved_range_.clear();
  reserved_name_.clear();
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* name */:
        ::protozero::internal::gen_helpers::DeserializeString(field, &name_);
        break;
      case 2 /* field */:
        field_.emplace_back();
        field_.back().ParseFromArray(field.data(), field.size());
        break;
      case 6 /* extension */:
        extension_.emplace_back();
        extension_.back().ParseFromArray(field.data(), field.size());
        break;
      case 3 /* nested_type */:
        nested_type_.emplace_back();
        nested_type_.back().ParseFromArray(field.data(), field.size());
        break;
      case 4 /* enum_type */:
        enum_type_.emplace_back();
        enum_type_.back().ParseFromArray(field.data(), field.size());
        break;
      case 8 /* oneof_decl */:
        oneof_decl_.emplace_back();
        oneof_decl_.back().ParseFromArray(field.data(), field.size());
        break;
      case 9 /* reserved_range */:
        reserved_range_.emplace_back();
        reserved_range_.back().ParseFromArray(field.data(), field.size());
        break;
      case 10 /* reserved_name */:
        reserved_name_.emplace_back();
        ::protozero::internal::gen_helpers::DeserializeString(field, &reserved_name_.back());
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string DescriptorProto::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> DescriptorProto::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void DescriptorProto::Serialize(::protozero::Message* msg) const {
  // Field 1: name
  if (_has_field_[1]) {
    ::protozero::internal::gen_helpers::SerializeString(1, name_, msg);
  }

  // Field 2: field
  for (auto& it : field_) {
    it.Serialize(msg->BeginNestedMessage<::protozero::Message>(2));
  }

  // Field 6: extension
  for (auto& it : extension_) {
    it.Serialize(msg->BeginNestedMessage<::protozero::Message>(6));
  }

  // Field 3: nested_type
  for (auto& it : nested_type_) {
    it.Serialize(msg->BeginNestedMessage<::protozero::Message>(3));
  }

  // Field 4: enum_type
  for (auto& it : enum_type_) {
    it.Serialize(msg->BeginNestedMessage<::protozero::Message>(4));
  }

  // Field 8: oneof_decl
  for (auto& it : oneof_decl_) {
    it.Serialize(msg->BeginNestedMessage<::protozero::Message>(8));
  }

  // Field 9: reserved_range
  for (auto& it : reserved_range_) {
    it.Serialize(msg->BeginNestedMessage<::protozero::Message>(9));
  }

  // Field 10: reserved_name
  for (auto& it : reserved_name_) {
    ::protozero::internal::gen_helpers::SerializeString(10, it, msg);
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}


DescriptorProto_ReservedRange::DescriptorProto_ReservedRange() = default;
DescriptorProto_ReservedRange::~DescriptorProto_ReservedRange() = default;
DescriptorProto_ReservedRange::DescriptorProto_ReservedRange(const DescriptorProto_ReservedRange&) = default;
DescriptorProto_ReservedRange& DescriptorProto_ReservedRange::operator=(const DescriptorProto_ReservedRange&) = default;
DescriptorProto_ReservedRange::DescriptorProto_ReservedRange(DescriptorProto_ReservedRange&&) noexcept = default;
DescriptorProto_ReservedRange& DescriptorProto_ReservedRange::operator=(DescriptorProto_ReservedRange&&) = default;

bool DescriptorProto_ReservedRange::operator==(const DescriptorProto_ReservedRange& other) const {
  return unknown_fields_ == other.unknown_fields_
   && start_ == other.start_
   && end_ == other.end_;
}

bool DescriptorProto_ReservedRange::ParseFromArray(const void* raw, size_t size) {
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* start */:
        field.get(&start_);
        break;
      case 2 /* end */:
        field.get(&end_);
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string DescriptorProto_ReservedRange::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> DescriptorProto_ReservedRange::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void DescriptorProto_ReservedRange::Serialize(::protozero::Message* msg) const {
  // Field 1: start
  if (_has_field_[1]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(1, start_, msg);
  }

  // Field 2: end
  if (_has_field_[2]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(2, end_, msg);
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}


FileDescriptorProto::FileDescriptorProto() = default;
FileDescriptorProto::~FileDescriptorProto() = default;
FileDescriptorProto::FileDescriptorProto(const FileDescriptorProto&) = default;
FileDescriptorProto& FileDescriptorProto::operator=(const FileDescriptorProto&) = default;
FileDescriptorProto::FileDescriptorProto(FileDescriptorProto&&) noexcept = default;
FileDescriptorProto& FileDescriptorProto::operator=(FileDescriptorProto&&) = default;

bool FileDescriptorProto::operator==(const FileDescriptorProto& other) const {
  return unknown_fields_ == other.unknown_fields_
   && name_ == other.name_
   && package_ == other.package_
   && dependency_ == other.dependency_
   && public_dependency_ == other.public_dependency_
   && weak_dependency_ == other.weak_dependency_
   && message_type_ == other.message_type_
   && enum_type_ == other.enum_type_
   && extension_ == other.extension_;
}

int FileDescriptorProto::message_type_size() const { return static_cast<int>(message_type_.size()); }
void FileDescriptorProto::clear_message_type() { message_type_.clear(); }
DescriptorProto* FileDescriptorProto::add_message_type() { message_type_.emplace_back(); return &message_type_.back(); }
int FileDescriptorProto::enum_type_size() const { return static_cast<int>(enum_type_.size()); }
void FileDescriptorProto::clear_enum_type() { enum_type_.clear(); }
EnumDescriptorProto* FileDescriptorProto::add_enum_type() { enum_type_.emplace_back(); return &enum_type_.back(); }
int FileDescriptorProto::extension_size() const { return static_cast<int>(extension_.size()); }
void FileDescriptorProto::clear_extension() { extension_.clear(); }
FieldDescriptorProto* FileDescriptorProto::add_extension() { extension_.emplace_back(); return &extension_.back(); }
bool FileDescriptorProto::ParseFromArray(const void* raw, size_t size) {
  dependency_.clear();
  public_dependency_.clear();
  weak_dependency_.clear();
  message_type_.clear();
  enum_type_.clear();
  extension_.clear();
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* name */:
        ::protozero::internal::gen_helpers::DeserializeString(field, &name_);
        break;
      case 2 /* package */:
        ::protozero::internal::gen_helpers::DeserializeString(field, &package_);
        break;
      case 3 /* dependency */:
        dependency_.emplace_back();
        ::protozero::internal::gen_helpers::DeserializeString(field, &dependency_.back());
        break;
      case 10 /* public_dependency */:
        public_dependency_.emplace_back();
        field.get(&public_dependency_.back());
        break;
      case 11 /* weak_dependency */:
        weak_dependency_.emplace_back();
        field.get(&weak_dependency_.back());
        break;
      case 4 /* message_type */:
        message_type_.emplace_back();
        message_type_.back().ParseFromArray(field.data(), field.size());
        break;
      case 5 /* enum_type */:
        enum_type_.emplace_back();
        enum_type_.back().ParseFromArray(field.data(), field.size());
        break;
      case 7 /* extension */:
        extension_.emplace_back();
        extension_.back().ParseFromArray(field.data(), field.size());
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string FileDescriptorProto::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> FileDescriptorProto::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void FileDescriptorProto::Serialize(::protozero::Message* msg) const {
  // Field 1: name
  if (_has_field_[1]) {
    ::protozero::internal::gen_helpers::SerializeString(1, name_, msg);
  }

  // Field 2: package
  if (_has_field_[2]) {
    ::protozero::internal::gen_helpers::SerializeString(2, package_, msg);
  }

  // Field 3: dependency
  for (auto& it : dependency_) {
    ::protozero::internal::gen_helpers::SerializeString(3, it, msg);
  }

  // Field 10: public_dependency
  for (auto& it : public_dependency_) {
    ::protozero::internal::gen_helpers::SerializeVarInt(10, it, msg);
  }

  // Field 11: weak_dependency
  for (auto& it : weak_dependency_) {
    ::protozero::internal::gen_helpers::SerializeVarInt(11, it, msg);
  }

  // Field 4: message_type
  for (auto& it : message_type_) {
    it.Serialize(msg->BeginNestedMessage<::protozero::Message>(4));
  }

  // Field 5: enum_type
  for (auto& it : enum_type_) {
    it.Serialize(msg->BeginNestedMessage<::protozero::Message>(5));
  }

  // Field 7: extension
  for (auto& it : extension_) {
    it.Serialize(msg->BeginNestedMessage<::protozero::Message>(7));
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}


FileDescriptorSet::FileDescriptorSet() = default;
FileDescriptorSet::~FileDescriptorSet() = default;
FileDescriptorSet::FileDescriptorSet(const FileDescriptorSet&) = default;
FileDescriptorSet& FileDescriptorSet::operator=(const FileDescriptorSet&) = default;
FileDescriptorSet::FileDescriptorSet(FileDescriptorSet&&) noexcept = default;
FileDescriptorSet& FileDescriptorSet::operator=(FileDescriptorSet&&) = default;

bool FileDescriptorSet::operator==(const FileDescriptorSet& other) const {
  return unknown_fields_ == other.unknown_fields_
   && file_ == other.file_;
}

int FileDescriptorSet::file_size() const { return static_cast<int>(file_.size()); }
void FileDescriptorSet::clear_file() { file_.clear(); }
FileDescriptorProto* FileDescriptorSet::add_file() { file_.emplace_back(); return &file_.back(); }
bool FileDescriptorSet::ParseFromArray(const void* raw, size_t size) {
  file_.clear();
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* file */:
        file_.emplace_back();
        file_.back().ParseFromArray(field.data(), field.size());
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string FileDescriptorSet::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> FileDescriptorSet::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void FileDescriptorSet::Serialize(::protozero::Message* msg) const {
  // Field 1: file
  for (auto& it : file_) {
    it.Serialize(msg->BeginNestedMessage<::protozero::Message>(1));
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}

}  // namespace perfetto
}  // namespace protos
}  // namespace gen
#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic pop
#endif