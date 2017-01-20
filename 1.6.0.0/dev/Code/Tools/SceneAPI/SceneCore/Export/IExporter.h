#pragma once

/*
* All or portions of this file Copyright (c) Amazon.com, Inc. or its affiliates or
* its licensors.
*
* For complete copyright and license terms please see the LICENSE at the root of this
* distribution (the "License"). All use of this software is governed by the License,
* or, if provided, by the license below or the license accompanying this file. Do not
* remove or modify any license notices. This file is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
*
*/

#include <memory>
#include <string>

namespace AZ
{
    namespace SceneAPI
    {
        namespace Containers
        {
            class Scene;
        }

        namespace Export
        {
            // Interface for classes that export data from (parts of) the scene.
            class IExporter
            {
            public:
                virtual ~IExporter() = 0;

                virtual bool WriteToFile(const char* outputDirectory, const AZ::SceneAPI::Containers::Scene& scene) = 0;
                virtual bool WriteToFile(const std::string& outputDirectory, const AZ::SceneAPI::Containers::Scene& scene) = 0;
            };

            inline IExporter::~IExporter()
            {
            }
        } // Export
    } // SceneAPI
} // AZ