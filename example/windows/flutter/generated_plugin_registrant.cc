//
//  Generated file. Do not edit.
//

// clang-format off

#include "generated_plugin_registrant.h"

#include <get_thumbnail_video/get_thumbnail_video_plugin_c_api.h>
#include <msg_video_trimmer/msg_video_trimmer_plugin_c_api.h>

void RegisterPlugins(flutter::PluginRegistry* registry) {
  GetThumbnailVideoPluginCApiRegisterWithRegistrar(
      registry->GetRegistrarForPlugin("GetThumbnailVideoPluginCApi"));
  MsgVideoTrimmerPluginCApiRegisterWithRegistrar(
      registry->GetRegistrarForPlugin("MsgVideoTrimmerPluginCApi"));
}
