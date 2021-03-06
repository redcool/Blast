/*
 * Copyright (c) 2008-2017, NVIDIA CORPORATION.  All rights reserved.
 *
 * NVIDIA CORPORATION and its licensors retain all intellectual property
 * and proprietary rights in and to this software, related documentation
 * and any modifications thereto.  Any use, reproduction, disclosure or
 * distribution of this software and related documentation without an express
 * license agreement from NVIDIA CORPORATION is strictly prohibited.
 */


#ifndef MODULE_CONVERSIONDESTRUCTIBLEASSETPARAMETERS_0P8_0P9H_H
#define MODULE_CONVERSIONDESTRUCTIBLEASSETPARAMETERS_0P8_0P9H_H

#include "NvParamConversionTemplate.h"
#include "DestructibleAssetParameters_0p8.h"
#include "DestructibleAssetParameters_0p9.h"

namespace nvidia {
namespace apex {
namespace legacy {


typedef NvParameterized::ParamConversionTemplate<nvidia::parameterized::DestructibleAssetParameters_0p8, 
						nvidia::parameterized::DestructibleAssetParameters_0p9, 
						nvidia::parameterized::DestructibleAssetParameters_0p8::ClassVersion, 
						nvidia::parameterized::DestructibleAssetParameters_0p9::ClassVersion>
						ConversionDestructibleAssetParameters_0p8_0p9Parent;

class ConversionDestructibleAssetParameters_0p8_0p9: public ConversionDestructibleAssetParameters_0p8_0p9Parent
{
public:
	static NvParameterized::Conversion* Create(NvParameterized::Traits* t)
	{
		void* buf = t->alloc(sizeof(ConversionDestructibleAssetParameters_0p8_0p9));
		return buf ? PX_PLACEMENT_NEW(buf, ConversionDestructibleAssetParameters_0p8_0p9)(t) : 0;
	}

protected:
	ConversionDestructibleAssetParameters_0p8_0p9(NvParameterized::Traits* t) : ConversionDestructibleAssetParameters_0p8_0p9Parent(t) {}

	const NvParameterized::PrefVer* getPreferredVersions() const
	{
		static NvParameterized::PrefVer prefVers[] =
		{
			//TODO:
			//	Add your preferred versions for included references here.
			//	Entry format is
			//		{ (const char*)longName, (uint32_t)preferredVersion }

			{ 0, 0 } // Terminator (do not remove!)
		};

		return prefVers;
	}

	bool convert()
	{
		//TODO:
		//	Write custom conversion code here using mNewData and mLegacyData members.
		//
		//	Note that
		//		- mNewData has already been initialized with default values
		//		- same-named/same-typed members have already been copied
		//			from mLegacyData to mNewData
		//		- included references were moved to mNewData
		//			(and updated to preferred versions according to getPreferredVersions)
		//
		//	For more info see the versioning wiki.

		return true;
	}
};


}
}
} //nvidia::apex::legacy

#endif
