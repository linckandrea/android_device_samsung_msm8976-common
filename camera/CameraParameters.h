/*
 * Copyright (C) 2017 The LineageOS Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

namespace android {

class CameraParameters
{
public:
    static const char KEY_OIS_SUPPORTED[];
    static const char KEY_SUPPORTED_EFFECT_PREVIEW_FPS_RANGE[];
    static const char PIXEL_FORMAT_YUV420SP_NV21[];
    static const char KEY_QC_SUPPORTED_FACE_RECOGNITION[];
    static const char KEY_QC_SUPPORTED_FACE_RECOGNITION_MODES[];
    static const char KEY_QC_FACE_DETECTION[];
    static const char KEY_QC_SUPPORTED_FACE_DETECTION[];
    static const char KEY_FACE_DETECTION[];
    static const char KEY_SUPPORTED_FACE_DETECTION[];
    static const char KEY_ZSL[];
    static const char KEY_CAMERA_MODE[];
    static const char KEY_RECORDING_HINT[];
    int getInt64(const char *key) const;
};

}; // namespace android
