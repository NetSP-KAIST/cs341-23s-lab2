// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/trace/ui_state.proto

#include "protos/perfetto/trace/ui_state.pb.h"

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
PROTOBUF_CONSTEXPR UiState_HighlightProcess::UiState_HighlightProcess(
    ::_pbi::ConstantInitialized)
  : _oneof_case_{}{}
struct UiState_HighlightProcessDefaultTypeInternal {
  PROTOBUF_CONSTEXPR UiState_HighlightProcessDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~UiState_HighlightProcessDefaultTypeInternal() {}
  union {
    UiState_HighlightProcess _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT_WITH_PTR PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 UiState_HighlightProcessDefaultTypeInternal _UiState_HighlightProcess_default_instance_;
PROTOBUF_CONSTEXPR UiState::UiState(
    ::_pbi::ConstantInitialized)
  : highlight_process_(nullptr)
  , timeline_start_ts_(int64_t{0})
  , timeline_end_ts_(int64_t{0}){}
struct UiStateDefaultTypeInternal {
  PROTOBUF_CONSTEXPR UiStateDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~UiStateDefaultTypeInternal() {}
  union {
    UiState _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT_WITH_PTR PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 UiStateDefaultTypeInternal _UiState_default_instance_;
}  // namespace protos
}  // namespace perfetto
namespace perfetto {
namespace protos {

// ===================================================================

class UiState_HighlightProcess::_Internal {
 public:
};

UiState_HighlightProcess::UiState_HighlightProcess(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(arena, is_message_owned) {
  SharedCtor();
  // @@protoc_insertion_point(arena_constructor:perfetto.protos.UiState.HighlightProcess)
}
UiState_HighlightProcess::UiState_HighlightProcess(const UiState_HighlightProcess& from)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite() {
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
  clear_has_selector();
  switch (from.selector_case()) {
    case kPid: {
      _internal_set_pid(from._internal_pid());
      break;
    }
    case kCmdline: {
      _internal_set_cmdline(from._internal_cmdline());
      break;
    }
    case SELECTOR_NOT_SET: {
      break;
    }
  }
  // @@protoc_insertion_point(copy_constructor:perfetto.protos.UiState.HighlightProcess)
}

inline void UiState_HighlightProcess::SharedCtor() {
clear_has_selector();
}

UiState_HighlightProcess::~UiState_HighlightProcess() {
  // @@protoc_insertion_point(destructor:perfetto.protos.UiState.HighlightProcess)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<std::string>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void UiState_HighlightProcess::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  if (has_selector()) {
    clear_selector();
  }
}

void UiState_HighlightProcess::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void UiState_HighlightProcess::clear_selector() {
// @@protoc_insertion_point(one_of_clear_start:perfetto.protos.UiState.HighlightProcess)
  switch (selector_case()) {
    case kPid: {
      // No need to clear
      break;
    }
    case kCmdline: {
      selector_.cmdline_.Destroy();
      break;
    }
    case SELECTOR_NOT_SET: {
      break;
    }
  }
  _oneof_case_[0] = SELECTOR_NOT_SET;
}


void UiState_HighlightProcess::Clear() {
// @@protoc_insertion_point(message_clear_start:perfetto.protos.UiState.HighlightProcess)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  clear_selector();
  _internal_metadata_.Clear<std::string>();
}

const char* UiState_HighlightProcess::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // uint32 pid = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _internal_set_pid(::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr));
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // string cmdline = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_cmdline();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
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
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* UiState_HighlightProcess::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:perfetto.protos.UiState.HighlightProcess)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  switch (selector_case()) {
    case kPid: {
      target = stream->EnsureSpace(target);
      target = ::_pbi::WireFormatLite::WriteUInt32ToArray(1, this->_internal_pid(), target);
      break;
    }
    case kCmdline: {
      target = stream->WriteStringMaybeAliased(
          2, this->_internal_cmdline(), target);
      break;
    }
    default: ;
  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:perfetto.protos.UiState.HighlightProcess)
  return target;
}

size_t UiState_HighlightProcess::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:perfetto.protos.UiState.HighlightProcess)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  switch (selector_case()) {
    // uint32 pid = 1;
    case kPid: {
      total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_pid());
      break;
    }
    // string cmdline = 2;
    case kCmdline: {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_cmdline());
      break;
    }
    case SELECTOR_NOT_SET: {
      break;
    }
  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size();
  }
  int cached_size = ::_pbi::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void UiState_HighlightProcess::CheckTypeAndMergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::MessageLite& from) {
  MergeFrom(*::_pbi::DownCast<const UiState_HighlightProcess*>(
      &from));
}

void UiState_HighlightProcess::MergeFrom(const UiState_HighlightProcess& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:perfetto.protos.UiState.HighlightProcess)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  switch (from.selector_case()) {
    case kPid: {
      _internal_set_pid(from._internal_pid());
      break;
    }
    case kCmdline: {
      _internal_set_cmdline(from._internal_cmdline());
      break;
    }
    case SELECTOR_NOT_SET: {
      break;
    }
  }
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void UiState_HighlightProcess::CopyFrom(const UiState_HighlightProcess& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:perfetto.protos.UiState.HighlightProcess)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool UiState_HighlightProcess::IsInitialized() const {
  return true;
}

void UiState_HighlightProcess::InternalSwap(UiState_HighlightProcess* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(selector_, other->selector_);
  swap(_oneof_case_[0], other->_oneof_case_[0]);
}

std::string UiState_HighlightProcess::GetTypeName() const {
  return "perfetto.protos.UiState.HighlightProcess";
}


// ===================================================================

class UiState::_Internal {
 public:
  using HasBits = decltype(std::declval<UiState>()._has_bits_);
  static void set_has_timeline_start_ts(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_timeline_end_ts(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static const ::perfetto::protos::UiState_HighlightProcess& highlight_process(const UiState* msg);
  static void set_has_highlight_process(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

const ::perfetto::protos::UiState_HighlightProcess&
UiState::_Internal::highlight_process(const UiState* msg) {
  return *msg->highlight_process_;
}
UiState::UiState(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(arena, is_message_owned) {
  SharedCtor();
  // @@protoc_insertion_point(arena_constructor:perfetto.protos.UiState)
}
UiState::UiState(const UiState& from)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
  if (from._internal_has_highlight_process()) {
    highlight_process_ = new ::perfetto::protos::UiState_HighlightProcess(*from.highlight_process_);
  } else {
    highlight_process_ = nullptr;
  }
  ::memcpy(&timeline_start_ts_, &from.timeline_start_ts_,
    static_cast<size_t>(reinterpret_cast<char*>(&timeline_end_ts_) -
    reinterpret_cast<char*>(&timeline_start_ts_)) + sizeof(timeline_end_ts_));
  // @@protoc_insertion_point(copy_constructor:perfetto.protos.UiState)
}

inline void UiState::SharedCtor() {
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&highlight_process_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&timeline_end_ts_) -
    reinterpret_cast<char*>(&highlight_process_)) + sizeof(timeline_end_ts_));
}

UiState::~UiState() {
  // @@protoc_insertion_point(destructor:perfetto.protos.UiState)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<std::string>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void UiState::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  if (this != internal_default_instance()) delete highlight_process_;
}

void UiState::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void UiState::Clear() {
// @@protoc_insertion_point(message_clear_start:perfetto.protos.UiState)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    GOOGLE_DCHECK(highlight_process_ != nullptr);
    highlight_process_->Clear();
  }
  if (cached_has_bits & 0x00000006u) {
    ::memset(&timeline_start_ts_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&timeline_end_ts_) -
        reinterpret_cast<char*>(&timeline_start_ts_)) + sizeof(timeline_end_ts_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<std::string>();
}

const char* UiState::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional int64 timeline_start_ts = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _Internal::set_has_timeline_start_ts(&has_bits);
          timeline_start_ts_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional int64 timeline_end_ts = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _Internal::set_has_timeline_end_ts(&has_bits);
          timeline_end_ts_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional .perfetto.protos.UiState.HighlightProcess highlight_process = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          ptr = ctx->ParseMessage(_internal_mutable_highlight_process(), ptr);
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

uint8_t* UiState::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:perfetto.protos.UiState)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional int64 timeline_start_ts = 1;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt64ToArray(1, this->_internal_timeline_start_ts(), target);
  }

  // optional int64 timeline_end_ts = 2;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt64ToArray(2, this->_internal_timeline_end_ts(), target);
  }

  // optional .perfetto.protos.UiState.HighlightProcess highlight_process = 3;
  if (cached_has_bits & 0x00000001u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(3, _Internal::highlight_process(this),
        _Internal::highlight_process(this).GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:perfetto.protos.UiState)
  return target;
}

size_t UiState::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:perfetto.protos.UiState)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    // optional .perfetto.protos.UiState.HighlightProcess highlight_process = 3;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *highlight_process_);
    }

    // optional int64 timeline_start_ts = 1;
    if (cached_has_bits & 0x00000002u) {
      total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(this->_internal_timeline_start_ts());
    }

    // optional int64 timeline_end_ts = 2;
    if (cached_has_bits & 0x00000004u) {
      total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(this->_internal_timeline_end_ts());
    }

  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size();
  }
  int cached_size = ::_pbi::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void UiState::CheckTypeAndMergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::MessageLite& from) {
  MergeFrom(*::_pbi::DownCast<const UiState*>(
      &from));
}

void UiState::MergeFrom(const UiState& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:perfetto.protos.UiState)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    if (cached_has_bits & 0x00000001u) {
      _internal_mutable_highlight_process()->::perfetto::protos::UiState_HighlightProcess::MergeFrom(from._internal_highlight_process());
    }
    if (cached_has_bits & 0x00000002u) {
      timeline_start_ts_ = from.timeline_start_ts_;
    }
    if (cached_has_bits & 0x00000004u) {
      timeline_end_ts_ = from.timeline_end_ts_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void UiState::CopyFrom(const UiState& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:perfetto.protos.UiState)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool UiState::IsInitialized() const {
  return true;
}

void UiState::InternalSwap(UiState* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(UiState, timeline_end_ts_)
      + sizeof(UiState::timeline_end_ts_)
      - PROTOBUF_FIELD_OFFSET(UiState, highlight_process_)>(
          reinterpret_cast<char*>(&highlight_process_),
          reinterpret_cast<char*>(&other->highlight_process_));
}

std::string UiState::GetTypeName() const {
  return "perfetto.protos.UiState";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::perfetto::protos::UiState_HighlightProcess*
Arena::CreateMaybeMessage< ::perfetto::protos::UiState_HighlightProcess >(Arena* arena) {
  return Arena::CreateMessageInternal< ::perfetto::protos::UiState_HighlightProcess >(arena);
}
template<> PROTOBUF_NOINLINE ::perfetto::protos::UiState*
Arena::CreateMaybeMessage< ::perfetto::protos::UiState >(Arena* arena) {
  return Arena::CreateMessageInternal< ::perfetto::protos::UiState >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
