// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/trace/extension_descriptor.proto

#include "protos/perfetto/trace/extension_descriptor.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

namespace perfetto {
namespace protos {
PROTOBUF_CONSTEXPR ExtensionDescriptor::ExtensionDescriptor(
    ::_pbi::ConstantInitialized)
  : extension_set_(nullptr){}
struct ExtensionDescriptorDefaultTypeInternal {
  PROTOBUF_CONSTEXPR ExtensionDescriptorDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~ExtensionDescriptorDefaultTypeInternal() {}
  union {
    ExtensionDescriptor _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT_WITH_PTR PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 ExtensionDescriptorDefaultTypeInternal _ExtensionDescriptor_default_instance_;
}  // namespace protos
}  // namespace perfetto
namespace perfetto {
namespace protos {

// ===================================================================

class ExtensionDescriptor::_Internal {
 public:
  using HasBits = decltype(std::declval<ExtensionDescriptor>()._has_bits_);
  static const ::perfetto::protos::FileDescriptorSet& extension_set(const ExtensionDescriptor* msg);
  static void set_has_extension_set(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

const ::perfetto::protos::FileDescriptorSet&
ExtensionDescriptor::_Internal::extension_set(const ExtensionDescriptor* msg) {
  return *msg->extension_set_;
}
void ExtensionDescriptor::clear_extension_set() {
  if (extension_set_ != nullptr) extension_set_->Clear();
  _has_bits_[0] &= ~0x00000001u;
}
ExtensionDescriptor::ExtensionDescriptor(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(arena, is_message_owned) {
  SharedCtor();
  // @@protoc_insertion_point(arena_constructor:perfetto.protos.ExtensionDescriptor)
}
ExtensionDescriptor::ExtensionDescriptor(const ExtensionDescriptor& from)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
  if (from._internal_has_extension_set()) {
    extension_set_ = new ::perfetto::protos::FileDescriptorSet(*from.extension_set_);
  } else {
    extension_set_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:perfetto.protos.ExtensionDescriptor)
}

inline void ExtensionDescriptor::SharedCtor() {
extension_set_ = nullptr;
}

ExtensionDescriptor::~ExtensionDescriptor() {
  // @@protoc_insertion_point(destructor:perfetto.protos.ExtensionDescriptor)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<std::string>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void ExtensionDescriptor::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  if (this != internal_default_instance()) delete extension_set_;
}

void ExtensionDescriptor::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void ExtensionDescriptor::Clear() {
// @@protoc_insertion_point(message_clear_start:perfetto.protos.ExtensionDescriptor)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    GOOGLE_DCHECK(extension_set_ != nullptr);
    extension_set_->Clear();
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<std::string>();
}

const char* ExtensionDescriptor::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional .perfetto.protos.FileDescriptorSet extension_set = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_extension_set(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<std::string>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* ExtensionDescriptor::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:perfetto.protos.ExtensionDescriptor)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional .perfetto.protos.FileDescriptorSet extension_set = 1;
  if (cached_has_bits & 0x00000001u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(1, _Internal::extension_set(this),
        _Internal::extension_set(this).GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:perfetto.protos.ExtensionDescriptor)
  return target;
}

size_t ExtensionDescriptor::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:perfetto.protos.ExtensionDescriptor)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // optional .perfetto.protos.FileDescriptorSet extension_set = 1;
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *extension_set_);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size();
  }
  int cached_size = ::_pbi::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ExtensionDescriptor::CheckTypeAndMergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::MessageLite& from) {
  MergeFrom(*::_pbi::DownCast<const ExtensionDescriptor*>(
      &from));
}

void ExtensionDescriptor::MergeFrom(const ExtensionDescriptor& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:perfetto.protos.ExtensionDescriptor)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_has_extension_set()) {
    _internal_mutable_extension_set()->::perfetto::protos::FileDescriptorSet::MergeFrom(from._internal_extension_set());
  }
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void ExtensionDescriptor::CopyFrom(const ExtensionDescriptor& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:perfetto.protos.ExtensionDescriptor)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ExtensionDescriptor::IsInitialized() const {
  if (_internal_has_extension_set()) {
    if (!extension_set_->IsInitialized()) return false;
  }
  return true;
}

void ExtensionDescriptor::InternalSwap(ExtensionDescriptor* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  swap(extension_set_, other->extension_set_);
}

std::string ExtensionDescriptor::GetTypeName() const {
  return "perfetto.protos.ExtensionDescriptor";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::perfetto::protos::ExtensionDescriptor*
Arena::CreateMaybeMessage< ::perfetto::protos::ExtensionDescriptor >(Arena* arena) {
  return Arena::CreateMessageInternal< ::perfetto::protos::ExtensionDescriptor >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
