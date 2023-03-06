// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: send_algorithm_test_result.proto

#include "send_algorithm_test_result.pb.h"

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

namespace quic {
PROTOBUF_CONSTEXPR SendAlgorithmTestResult::SendAlgorithmTestResult(
    ::_pbi::ConstantInitialized)
  : test_name_(&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{})
  , random_seed_(uint64_t{0u})
  , simulated_duration_micros_(int64_t{0}){}
struct SendAlgorithmTestResultDefaultTypeInternal {
  PROTOBUF_CONSTEXPR SendAlgorithmTestResultDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~SendAlgorithmTestResultDefaultTypeInternal() {}
  union {
    SendAlgorithmTestResult _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT_WITH_PTR PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 SendAlgorithmTestResultDefaultTypeInternal _SendAlgorithmTestResult_default_instance_;
}  // namespace quic
namespace quic {

// ===================================================================

class SendAlgorithmTestResult::_Internal {
 public:
  using HasBits = decltype(std::declval<SendAlgorithmTestResult>()._has_bits_);
  static void set_has_test_name(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_random_seed(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_simulated_duration_micros(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
};

SendAlgorithmTestResult::SendAlgorithmTestResult(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(arena, is_message_owned) {
  SharedCtor();
  // @@protoc_insertion_point(arena_constructor:quic.SendAlgorithmTestResult)
}
SendAlgorithmTestResult::SendAlgorithmTestResult(const SendAlgorithmTestResult& from)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
  test_name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    test_name_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_test_name()) {
    test_name_.Set(from._internal_test_name(), 
      GetArenaForAllocation());
  }
  ::memcpy(&random_seed_, &from.random_seed_,
    static_cast<size_t>(reinterpret_cast<char*>(&simulated_duration_micros_) -
    reinterpret_cast<char*>(&random_seed_)) + sizeof(simulated_duration_micros_));
  // @@protoc_insertion_point(copy_constructor:quic.SendAlgorithmTestResult)
}

inline void SendAlgorithmTestResult::SharedCtor() {
test_name_.InitDefault();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  test_name_.Set("", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&random_seed_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&simulated_duration_micros_) -
    reinterpret_cast<char*>(&random_seed_)) + sizeof(simulated_duration_micros_));
}

SendAlgorithmTestResult::~SendAlgorithmTestResult() {
  // @@protoc_insertion_point(destructor:quic.SendAlgorithmTestResult)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<std::string>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void SendAlgorithmTestResult::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  test_name_.Destroy();
}

void SendAlgorithmTestResult::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void SendAlgorithmTestResult::Clear() {
// @@protoc_insertion_point(message_clear_start:quic.SendAlgorithmTestResult)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    test_name_.ClearNonDefaultToEmpty();
  }
  if (cached_has_bits & 0x00000006u) {
    ::memset(&random_seed_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&simulated_duration_micros_) -
        reinterpret_cast<char*>(&random_seed_)) + sizeof(simulated_duration_micros_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<std::string>();
}

const char* SendAlgorithmTestResult::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional string test_name = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_test_name();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional uint64 random_seed = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _Internal::set_has_random_seed(&has_bits);
          random_seed_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional int64 simulated_duration_micros = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          _Internal::set_has_simulated_duration_micros(&has_bits);
          simulated_duration_micros_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
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

uint8_t* SendAlgorithmTestResult::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:quic.SendAlgorithmTestResult)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional string test_name = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_test_name(), target);
  }

  // optional uint64 random_seed = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt64ToArray(2, this->_internal_random_seed(), target);
  }

  // optional int64 simulated_duration_micros = 3;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt64ToArray(3, this->_internal_simulated_duration_micros(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:quic.SendAlgorithmTestResult)
  return target;
}

size_t SendAlgorithmTestResult::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:quic.SendAlgorithmTestResult)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    // optional string test_name = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_test_name());
    }

    // optional uint64 random_seed = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += ::_pbi::WireFormatLite::UInt64SizePlusOne(this->_internal_random_seed());
    }

    // optional int64 simulated_duration_micros = 3;
    if (cached_has_bits & 0x00000004u) {
      total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(this->_internal_simulated_duration_micros());
    }

  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size();
  }
  int cached_size = ::_pbi::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void SendAlgorithmTestResult::CheckTypeAndMergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::MessageLite& from) {
  MergeFrom(*::_pbi::DownCast<const SendAlgorithmTestResult*>(
      &from));
}

void SendAlgorithmTestResult::MergeFrom(const SendAlgorithmTestResult& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:quic.SendAlgorithmTestResult)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    if (cached_has_bits & 0x00000001u) {
      _internal_set_test_name(from._internal_test_name());
    }
    if (cached_has_bits & 0x00000002u) {
      random_seed_ = from.random_seed_;
    }
    if (cached_has_bits & 0x00000004u) {
      simulated_duration_micros_ = from.simulated_duration_micros_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void SendAlgorithmTestResult::CopyFrom(const SendAlgorithmTestResult& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:quic.SendAlgorithmTestResult)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SendAlgorithmTestResult::IsInitialized() const {
  return true;
}

void SendAlgorithmTestResult::InternalSwap(SendAlgorithmTestResult* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &test_name_, lhs_arena,
      &other->test_name_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(SendAlgorithmTestResult, simulated_duration_micros_)
      + sizeof(SendAlgorithmTestResult::simulated_duration_micros_)
      - PROTOBUF_FIELD_OFFSET(SendAlgorithmTestResult, random_seed_)>(
          reinterpret_cast<char*>(&random_seed_),
          reinterpret_cast<char*>(&other->random_seed_));
}

std::string SendAlgorithmTestResult::GetTypeName() const {
  return "quic.SendAlgorithmTestResult";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace quic
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::quic::SendAlgorithmTestResult*
Arena::CreateMaybeMessage< ::quic::SendAlgorithmTestResult >(Arena* arena) {
  return Arena::CreateMessageInternal< ::quic::SendAlgorithmTestResult >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>