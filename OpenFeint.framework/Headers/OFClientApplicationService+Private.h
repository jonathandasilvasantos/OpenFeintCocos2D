//  Copyright 2009-2010 Aurora Feint, Inc.
// 
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//  
//  	http://www.apache.org/licenses/LICENSE-2.0
//  	
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.

#import "OFClientApplicationService.h"
#import "OFPlayerReview.h"

@interface OFClientApplicationService (Private)

+ (OFRequestHandle*) makeGameFavorite:(NSString*)clientApplicationId reviewText:(NSString*)review 
                  onSuccessInvocation:(OFInvocation*)success onFailureInvocation:(OFInvocation*)failure;
+ (void) unfavoriteGame:(NSString*)clientApplicationId onSuccessInvocation:(OFInvocation*)success onFailureInvocation:(OFInvocation*)failure;

+ (void) viewedFanClub:(NSString*)clientApplicationId;

+ (void) removeGameFromLocalUsersList:(NSString*)clientApplicationId onSuccessInvocation:(OFInvocation*)onSuccess onFailureInvocation:(OFInvocation*)onFailure;

@end