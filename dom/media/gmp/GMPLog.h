/* -*- Mode: C++; tab-width: 2; indent-tabs-mode: nil; c-basic-offset: 2 -*- */
/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef DOM_MEDIA_GMPLOG_H_
#define DOM_MEDIA_GMPLOG_H_

#include "content_decryption_module.h"
#include "gmp-video-codec.h"
#include "mozilla/Logging.h"

namespace mozilla {

extern LogModule* GetGMPLog();
extern LogModule* GetGMPLibraryLog();
extern GMPLogLevel GetGMPLibraryLogLevel();

#define GMP_LOG_ERROR(msg, ...) \
  MOZ_LOG(GetGMPLog(), LogLevel::Error, (msg, ##__VA_ARGS__))
#define GMP_LOG_WARNING(msg, ...) \
  MOZ_LOG(GetGMPLog(), LogLevel::Warning, (msg, ##__VA_ARGS__))
#define GMP_LOG_INFO(msg, ...) \
  MOZ_LOG(GetGMPLog(), LogLevel::Info, (msg, ##__VA_ARGS__))
#define GMP_LOG_DEBUG(msg, ...) \
  MOZ_LOG(GetGMPLog(), LogLevel::Debug, (msg, ##__VA_ARGS__))
#define GMP_LOG_VERBOSE(msg, ...) \
  MOZ_LOG(GetGMPLog(), LogLevel::Verbose, (msg, ##__VA_ARGS__))

}  // namespace mozilla

#endif  // DOM_MEDIA_GMPLOG_H_
