// DO NOT EDIT. Autogenerated by Perfetto cppgen_plugin
#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_ANDROID_ANDROID_GAME_INTERVENTION_LIST_PROTO_CPP_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_ANDROID_ANDROID_GAME_INTERVENTION_LIST_PROTO_CPP_H_

#include <stdint.h>
#include <bitset>
#include <vector>
#include <string>
#include <type_traits>

#include "perfetto/protozero/cpp_message_obj.h"
#include "perfetto/protozero/copyable_ptr.h"
#include "perfetto/base/export.h"

namespace perfetto {
namespace protos {
namespace gen {
class AndroidGameInterventionList;
class AndroidGameInterventionList_GamePackageInfo;
class AndroidGameInterventionList_GameModeInfo;
}  // namespace perfetto
}  // namespace protos
}  // namespace gen

namespace protozero {
class Message;
}  // namespace protozero

namespace perfetto {
namespace protos {
namespace gen {

class PERFETTO_EXPORT_COMPONENT AndroidGameInterventionList : public ::protozero::CppMessageObj {
 public:
  using GameModeInfo = AndroidGameInterventionList_GameModeInfo;
  using GamePackageInfo = AndroidGameInterventionList_GamePackageInfo;
  enum FieldNumbers {
    kGamePackagesFieldNumber = 1,
    kParseErrorFieldNumber = 2,
    kReadErrorFieldNumber = 3,
  };

  AndroidGameInterventionList();
  ~AndroidGameInterventionList() override;
  AndroidGameInterventionList(AndroidGameInterventionList&&) noexcept;
  AndroidGameInterventionList& operator=(AndroidGameInterventionList&&);
  AndroidGameInterventionList(const AndroidGameInterventionList&);
  AndroidGameInterventionList& operator=(const AndroidGameInterventionList&);
  bool operator==(const AndroidGameInterventionList&) const;
  bool operator!=(const AndroidGameInterventionList& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  const std::vector<AndroidGameInterventionList_GamePackageInfo>& game_packages() const { return game_packages_; }
  std::vector<AndroidGameInterventionList_GamePackageInfo>* mutable_game_packages() { return &game_packages_; }
  int game_packages_size() const;
  void clear_game_packages();
  AndroidGameInterventionList_GamePackageInfo* add_game_packages();

  bool has_parse_error() const { return _has_field_[2]; }
  bool parse_error() const { return parse_error_; }
  void set_parse_error(bool value) { parse_error_ = value; _has_field_.set(2); }

  bool has_read_error() const { return _has_field_[3]; }
  bool read_error() const { return read_error_; }
  void set_read_error(bool value) { read_error_ = value; _has_field_.set(3); }

 private:
  std::vector<AndroidGameInterventionList_GamePackageInfo> game_packages_;
  bool parse_error_{};
  bool read_error_{};

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<4> _has_field_{};
};


class PERFETTO_EXPORT_COMPONENT AndroidGameInterventionList_GamePackageInfo : public ::protozero::CppMessageObj {
 public:
  enum FieldNumbers {
    kNameFieldNumber = 1,
    kUidFieldNumber = 2,
    kCurrentModeFieldNumber = 3,
    kGameModeInfoFieldNumber = 4,
  };

  AndroidGameInterventionList_GamePackageInfo();
  ~AndroidGameInterventionList_GamePackageInfo() override;
  AndroidGameInterventionList_GamePackageInfo(AndroidGameInterventionList_GamePackageInfo&&) noexcept;
  AndroidGameInterventionList_GamePackageInfo& operator=(AndroidGameInterventionList_GamePackageInfo&&);
  AndroidGameInterventionList_GamePackageInfo(const AndroidGameInterventionList_GamePackageInfo&);
  AndroidGameInterventionList_GamePackageInfo& operator=(const AndroidGameInterventionList_GamePackageInfo&);
  bool operator==(const AndroidGameInterventionList_GamePackageInfo&) const;
  bool operator!=(const AndroidGameInterventionList_GamePackageInfo& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  bool has_name() const { return _has_field_[1]; }
  const std::string& name() const { return name_; }
  void set_name(const std::string& value) { name_ = value; _has_field_.set(1); }

  bool has_uid() const { return _has_field_[2]; }
  uint64_t uid() const { return uid_; }
  void set_uid(uint64_t value) { uid_ = value; _has_field_.set(2); }

  bool has_current_mode() const { return _has_field_[3]; }
  uint32_t current_mode() const { return current_mode_; }
  void set_current_mode(uint32_t value) { current_mode_ = value; _has_field_.set(3); }

  const std::vector<AndroidGameInterventionList_GameModeInfo>& game_mode_info() const { return game_mode_info_; }
  std::vector<AndroidGameInterventionList_GameModeInfo>* mutable_game_mode_info() { return &game_mode_info_; }
  int game_mode_info_size() const;
  void clear_game_mode_info();
  AndroidGameInterventionList_GameModeInfo* add_game_mode_info();

 private:
  std::string name_{};
  uint64_t uid_{};
  uint32_t current_mode_{};
  std::vector<AndroidGameInterventionList_GameModeInfo> game_mode_info_;

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<5> _has_field_{};
};


class PERFETTO_EXPORT_COMPONENT AndroidGameInterventionList_GameModeInfo : public ::protozero::CppMessageObj {
 public:
  enum FieldNumbers {
    kModeFieldNumber = 1,
    kUseAngleFieldNumber = 2,
    kResolutionDownscaleFieldNumber = 3,
    kFpsFieldNumber = 4,
  };

  AndroidGameInterventionList_GameModeInfo();
  ~AndroidGameInterventionList_GameModeInfo() override;
  AndroidGameInterventionList_GameModeInfo(AndroidGameInterventionList_GameModeInfo&&) noexcept;
  AndroidGameInterventionList_GameModeInfo& operator=(AndroidGameInterventionList_GameModeInfo&&);
  AndroidGameInterventionList_GameModeInfo(const AndroidGameInterventionList_GameModeInfo&);
  AndroidGameInterventionList_GameModeInfo& operator=(const AndroidGameInterventionList_GameModeInfo&);
  bool operator==(const AndroidGameInterventionList_GameModeInfo&) const;
  bool operator!=(const AndroidGameInterventionList_GameModeInfo& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  bool has_mode() const { return _has_field_[1]; }
  uint32_t mode() const { return mode_; }
  void set_mode(uint32_t value) { mode_ = value; _has_field_.set(1); }

  bool has_use_angle() const { return _has_field_[2]; }
  bool use_angle() const { return use_angle_; }
  void set_use_angle(bool value) { use_angle_ = value; _has_field_.set(2); }

  bool has_resolution_downscale() const { return _has_field_[3]; }
  float resolution_downscale() const { return resolution_downscale_; }
  void set_resolution_downscale(float value) { resolution_downscale_ = value; _has_field_.set(3); }

  bool has_fps() const { return _has_field_[4]; }
  float fps() const { return fps_; }
  void set_fps(float value) { fps_ = value; _has_field_.set(4); }

 private:
  uint32_t mode_{};
  bool use_angle_{};
  float resolution_downscale_{};
  float fps_{};

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<5> _has_field_{};
};

}  // namespace perfetto
}  // namespace protos
}  // namespace gen

#endif  // PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_ANDROID_ANDROID_GAME_INTERVENTION_LIST_PROTO_CPP_H_
