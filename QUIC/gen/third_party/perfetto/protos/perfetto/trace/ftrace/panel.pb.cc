// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/trace/ftrace/panel.proto

#include "protos/perfetto/trace/ftrace/panel.pb.h"

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
PROTOBUF_CONSTEXPR DsiCmdFifoStatusFtraceEvent::DsiCmdFifoStatusFtraceEvent(
    ::_pbi::ConstantInitialized)
  : header_(0u)
  , payload_(0u){}
struct DsiCmdFifoStatusFtraceEventDefaultTypeInternal {
  PROTOBUF_CONSTEXPR DsiCmdFifoStatusFtraceEventDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~DsiCmdFifoStatusFtraceEventDefaultTypeInternal() {}
  union {
    DsiCmdFifoStatusFtraceEvent _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT_WITH_PTR PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 DsiCmdFifoStatusFtraceEventDefaultTypeInternal _DsiCmdFifoStatusFtraceEvent_default_instance_;
PROTOBUF_CONSTEXPR DsiRxFtraceEvent::DsiRxFtraceEvent(
    ::_pbi::ConstantInitialized)
  : cmd_(0u)
  , rx_buf_(0u){}
struct DsiRxFtraceEventDefaultTypeInternal {
  PROTOBUF_CONSTEXPR DsiRxFtraceEventDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~DsiRxFtraceEventDefaultTypeInternal() {}
  union {
    DsiRxFtraceEvent _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT_WITH_PTR PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 DsiRxFtraceEventDefaultTypeInternal _DsiRxFtraceEvent_default_instance_;
PROTOBUF_CONSTEXPR DsiTxFtraceEvent::DsiTxFtraceEvent(
    ::_pbi::ConstantInitialized)
  : last_(0u)
  , tx_buf_(0u)
  , type_(0u){}
struct DsiTxFtraceEventDefaultTypeInternal {
  PROTOBUF_CONSTEXPR DsiTxFtraceEventDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~DsiTxFtraceEventDefaultTypeInternal() {}
  union {
    DsiTxFtraceEvent _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT_WITH_PTR PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 DsiTxFtraceEventDefaultTypeInternal _DsiTxFtraceEvent_default_instance_;
}  // namespace protos
}  // namespace perfetto
namespace perfetto {
namespace protos {

// ===================================================================

class DsiCmdFifoStatusFtraceEvent::_Internal {
 public:
  using HasBits = decltype(std::declval<DsiCmdFifoStatusFtraceEvent>()._has_bits_);
  static void set_has_header(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_payload(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
};

DsiCmdFifoStatusFtraceEvent::DsiCmdFifoStatusFtraceEvent(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(arena, is_message_owned) {
  SharedCtor();
  // @@protoc_insertion_point(arena_constructor:perfetto.protos.DsiCmdFifoStatusFtraceEvent)
}
DsiCmdFifoStatusFtraceEvent::DsiCmdFifoStatusFtraceEvent(const DsiCmdFifoStatusFtraceEvent& from)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
  ::memcpy(&header_, &from.header_,
    static_cast<size_t>(reinterpret_cast<char*>(&payload_) -
    reinterpret_cast<char*>(&header_)) + sizeof(payload_));
  // @@protoc_insertion_point(copy_constructor:perfetto.protos.DsiCmdFifoStatusFtraceEvent)
}

inline void DsiCmdFifoStatusFtraceEvent::SharedCtor() {
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&header_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&payload_) -
    reinterpret_cast<char*>(&header_)) + sizeof(payload_));
}

DsiCmdFifoStatusFtraceEvent::~DsiCmdFifoStatusFtraceEvent() {
  // @@protoc_insertion_point(destructor:perfetto.protos.DsiCmdFifoStatusFtraceEvent)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<std::string>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void DsiCmdFifoStatusFtraceEvent::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void DsiCmdFifoStatusFtraceEvent::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void DsiCmdFifoStatusFtraceEvent::Clear() {
// @@protoc_insertion_point(message_clear_start:perfetto.protos.DsiCmdFifoStatusFtraceEvent)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    ::memset(&header_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&payload_) -
        reinterpret_cast<char*>(&header_)) + sizeof(payload_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<std::string>();
}

const char* DsiCmdFifoStatusFtraceEvent::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional uint32 header = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _Internal::set_has_header(&has_bits);
          header_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional uint32 payload = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _Internal::set_has_payload(&has_bits);
          payload_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
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

uint8_t* DsiCmdFifoStatusFtraceEvent::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:perfetto.protos.DsiCmdFifoStatusFtraceEvent)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional uint32 header = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(1, this->_internal_header(), target);
  }

  // optional uint32 payload = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(2, this->_internal_payload(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:perfetto.protos.DsiCmdFifoStatusFtraceEvent)
  return target;
}

size_t DsiCmdFifoStatusFtraceEvent::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:perfetto.protos.DsiCmdFifoStatusFtraceEvent)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    // optional uint32 header = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_header());
    }

    // optional uint32 payload = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_payload());
    }

  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size();
  }
  int cached_size = ::_pbi::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void DsiCmdFifoStatusFtraceEvent::CheckTypeAndMergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::MessageLite& from) {
  MergeFrom(*::_pbi::DownCast<const DsiCmdFifoStatusFtraceEvent*>(
      &from));
}

void DsiCmdFifoStatusFtraceEvent::MergeFrom(const DsiCmdFifoStatusFtraceEvent& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:perfetto.protos.DsiCmdFifoStatusFtraceEvent)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      header_ = from.header_;
    }
    if (cached_has_bits & 0x00000002u) {
      payload_ = from.payload_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void DsiCmdFifoStatusFtraceEvent::CopyFrom(const DsiCmdFifoStatusFtraceEvent& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:perfetto.protos.DsiCmdFifoStatusFtraceEvent)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool DsiCmdFifoStatusFtraceEvent::IsInitialized() const {
  return true;
}

void DsiCmdFifoStatusFtraceEvent::InternalSwap(DsiCmdFifoStatusFtraceEvent* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(DsiCmdFifoStatusFtraceEvent, payload_)
      + sizeof(DsiCmdFifoStatusFtraceEvent::payload_)
      - PROTOBUF_FIELD_OFFSET(DsiCmdFifoStatusFtraceEvent, header_)>(
          reinterpret_cast<char*>(&header_),
          reinterpret_cast<char*>(&other->header_));
}

std::string DsiCmdFifoStatusFtraceEvent::GetTypeName() const {
  return "perfetto.protos.DsiCmdFifoStatusFtraceEvent";
}


// ===================================================================

class DsiRxFtraceEvent::_Internal {
 public:
  using HasBits = decltype(std::declval<DsiRxFtraceEvent>()._has_bits_);
  static void set_has_cmd(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_rx_buf(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
};

DsiRxFtraceEvent::DsiRxFtraceEvent(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(arena, is_message_owned) {
  SharedCtor();
  // @@protoc_insertion_point(arena_constructor:perfetto.protos.DsiRxFtraceEvent)
}
DsiRxFtraceEvent::DsiRxFtraceEvent(const DsiRxFtraceEvent& from)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
  ::memcpy(&cmd_, &from.cmd_,
    static_cast<size_t>(reinterpret_cast<char*>(&rx_buf_) -
    reinterpret_cast<char*>(&cmd_)) + sizeof(rx_buf_));
  // @@protoc_insertion_point(copy_constructor:perfetto.protos.DsiRxFtraceEvent)
}

inline void DsiRxFtraceEvent::SharedCtor() {
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&cmd_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&rx_buf_) -
    reinterpret_cast<char*>(&cmd_)) + sizeof(rx_buf_));
}

DsiRxFtraceEvent::~DsiRxFtraceEvent() {
  // @@protoc_insertion_point(destructor:perfetto.protos.DsiRxFtraceEvent)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<std::string>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void DsiRxFtraceEvent::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void DsiRxFtraceEvent::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void DsiRxFtraceEvent::Clear() {
// @@protoc_insertion_point(message_clear_start:perfetto.protos.DsiRxFtraceEvent)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    ::memset(&cmd_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&rx_buf_) -
        reinterpret_cast<char*>(&cmd_)) + sizeof(rx_buf_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<std::string>();
}

const char* DsiRxFtraceEvent::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional uint32 cmd = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _Internal::set_has_cmd(&has_bits);
          cmd_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional uint32 rx_buf = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _Internal::set_has_rx_buf(&has_bits);
          rx_buf_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
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

uint8_t* DsiRxFtraceEvent::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:perfetto.protos.DsiRxFtraceEvent)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional uint32 cmd = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(1, this->_internal_cmd(), target);
  }

  // optional uint32 rx_buf = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(2, this->_internal_rx_buf(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:perfetto.protos.DsiRxFtraceEvent)
  return target;
}

size_t DsiRxFtraceEvent::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:perfetto.protos.DsiRxFtraceEvent)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    // optional uint32 cmd = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_cmd());
    }

    // optional uint32 rx_buf = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_rx_buf());
    }

  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size();
  }
  int cached_size = ::_pbi::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void DsiRxFtraceEvent::CheckTypeAndMergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::MessageLite& from) {
  MergeFrom(*::_pbi::DownCast<const DsiRxFtraceEvent*>(
      &from));
}

void DsiRxFtraceEvent::MergeFrom(const DsiRxFtraceEvent& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:perfetto.protos.DsiRxFtraceEvent)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      cmd_ = from.cmd_;
    }
    if (cached_has_bits & 0x00000002u) {
      rx_buf_ = from.rx_buf_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void DsiRxFtraceEvent::CopyFrom(const DsiRxFtraceEvent& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:perfetto.protos.DsiRxFtraceEvent)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool DsiRxFtraceEvent::IsInitialized() const {
  return true;
}

void DsiRxFtraceEvent::InternalSwap(DsiRxFtraceEvent* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(DsiRxFtraceEvent, rx_buf_)
      + sizeof(DsiRxFtraceEvent::rx_buf_)
      - PROTOBUF_FIELD_OFFSET(DsiRxFtraceEvent, cmd_)>(
          reinterpret_cast<char*>(&cmd_),
          reinterpret_cast<char*>(&other->cmd_));
}

std::string DsiRxFtraceEvent::GetTypeName() const {
  return "perfetto.protos.DsiRxFtraceEvent";
}


// ===================================================================

class DsiTxFtraceEvent::_Internal {
 public:
  using HasBits = decltype(std::declval<DsiTxFtraceEvent>()._has_bits_);
  static void set_has_last(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_tx_buf(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_type(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
};

DsiTxFtraceEvent::DsiTxFtraceEvent(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(arena, is_message_owned) {
  SharedCtor();
  // @@protoc_insertion_point(arena_constructor:perfetto.protos.DsiTxFtraceEvent)
}
DsiTxFtraceEvent::DsiTxFtraceEvent(const DsiTxFtraceEvent& from)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
  ::memcpy(&last_, &from.last_,
    static_cast<size_t>(reinterpret_cast<char*>(&type_) -
    reinterpret_cast<char*>(&last_)) + sizeof(type_));
  // @@protoc_insertion_point(copy_constructor:perfetto.protos.DsiTxFtraceEvent)
}

inline void DsiTxFtraceEvent::SharedCtor() {
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&last_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&type_) -
    reinterpret_cast<char*>(&last_)) + sizeof(type_));
}

DsiTxFtraceEvent::~DsiTxFtraceEvent() {
  // @@protoc_insertion_point(destructor:perfetto.protos.DsiTxFtraceEvent)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<std::string>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void DsiTxFtraceEvent::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void DsiTxFtraceEvent::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void DsiTxFtraceEvent::Clear() {
// @@protoc_insertion_point(message_clear_start:perfetto.protos.DsiTxFtraceEvent)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    ::memset(&last_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&type_) -
        reinterpret_cast<char*>(&last_)) + sizeof(type_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<std::string>();
}

const char* DsiTxFtraceEvent::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional uint32 last = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _Internal::set_has_last(&has_bits);
          last_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional uint32 tx_buf = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _Internal::set_has_tx_buf(&has_bits);
          tx_buf_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional uint32 type = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          _Internal::set_has_type(&has_bits);
          type_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
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

uint8_t* DsiTxFtraceEvent::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:perfetto.protos.DsiTxFtraceEvent)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional uint32 last = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(1, this->_internal_last(), target);
  }

  // optional uint32 tx_buf = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(2, this->_internal_tx_buf(), target);
  }

  // optional uint32 type = 3;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(3, this->_internal_type(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:perfetto.protos.DsiTxFtraceEvent)
  return target;
}

size_t DsiTxFtraceEvent::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:perfetto.protos.DsiTxFtraceEvent)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    // optional uint32 last = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_last());
    }

    // optional uint32 tx_buf = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_tx_buf());
    }

    // optional uint32 type = 3;
    if (cached_has_bits & 0x00000004u) {
      total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_type());
    }

  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size();
  }
  int cached_size = ::_pbi::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void DsiTxFtraceEvent::CheckTypeAndMergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::MessageLite& from) {
  MergeFrom(*::_pbi::DownCast<const DsiTxFtraceEvent*>(
      &from));
}

void DsiTxFtraceEvent::MergeFrom(const DsiTxFtraceEvent& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:perfetto.protos.DsiTxFtraceEvent)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    if (cached_has_bits & 0x00000001u) {
      last_ = from.last_;
    }
    if (cached_has_bits & 0x00000002u) {
      tx_buf_ = from.tx_buf_;
    }
    if (cached_has_bits & 0x00000004u) {
      type_ = from.type_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void DsiTxFtraceEvent::CopyFrom(const DsiTxFtraceEvent& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:perfetto.protos.DsiTxFtraceEvent)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool DsiTxFtraceEvent::IsInitialized() const {
  return true;
}

void DsiTxFtraceEvent::InternalSwap(DsiTxFtraceEvent* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(DsiTxFtraceEvent, type_)
      + sizeof(DsiTxFtraceEvent::type_)
      - PROTOBUF_FIELD_OFFSET(DsiTxFtraceEvent, last_)>(
          reinterpret_cast<char*>(&last_),
          reinterpret_cast<char*>(&other->last_));
}

std::string DsiTxFtraceEvent::GetTypeName() const {
  return "perfetto.protos.DsiTxFtraceEvent";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::perfetto::protos::DsiCmdFifoStatusFtraceEvent*
Arena::CreateMaybeMessage< ::perfetto::protos::DsiCmdFifoStatusFtraceEvent >(Arena* arena) {
  return Arena::CreateMessageInternal< ::perfetto::protos::DsiCmdFifoStatusFtraceEvent >(arena);
}
template<> PROTOBUF_NOINLINE ::perfetto::protos::DsiRxFtraceEvent*
Arena::CreateMaybeMessage< ::perfetto::protos::DsiRxFtraceEvent >(Arena* arena) {
  return Arena::CreateMessageInternal< ::perfetto::protos::DsiRxFtraceEvent >(arena);
}
template<> PROTOBUF_NOINLINE ::perfetto::protos::DsiTxFtraceEvent*
Arena::CreateMaybeMessage< ::perfetto::protos::DsiTxFtraceEvent >(Arena* arena) {
  return Arena::CreateMessageInternal< ::perfetto::protos::DsiTxFtraceEvent >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>