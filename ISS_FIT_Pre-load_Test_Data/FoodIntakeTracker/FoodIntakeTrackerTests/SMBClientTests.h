// Copyright (c) 2013 TopCoder. All rights reserved.

// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//    http://www.apache.org/licenses/LICENSE-2.0

// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
//
//  SMBClientTests.h
//  ISSFoodIntakeTracker
//
//  Created by LokiYang on 8/5/13.
//

#import <SenTestingKit/SenTestingKit.h>
#import "BaseTests.h"
#import "SMBClient.h"

/*!
 @class SMBClientTests
 @discussion This is the unit test cases for SMBClient.
 @author LokiYang
 @version 1.0
 */
@interface SMBClientTests : BaseTests

/*!
 @discussion This value represents smbclient instance.
 */
@property (nonatomic, strong) id<SMBClient> smbClient;

/*!
 @discussion This value represents test folder in shared file server.
 */
@property (nonatomic, strong) NSString *testFolder;
@end
