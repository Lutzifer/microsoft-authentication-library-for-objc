//------------------------------------------------------------------------------
//
// Copyright (c) Microsoft Corporation.
// All rights reserved.
//
// This code is licensed under the MIT License.
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files(the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and / or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions :
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//
//------------------------------------------------------------------------------

#import <Foundation/Foundation.h>
#import "MSALDefinitions.h"

@class MSALRedirectUri;
@class MSALAuthority;
@class MSALWebViewConfig;
@class MSALSliceConfig;

NS_ASSUME_NONNULL_BEGIN

@interface MSALPublicClientApplicationConfig : NSObject

/*! The client ID of the application, this should come from the app developer portal. */
@property NSString *clientId;

/*! The redirect URI of the application */
@property NSString *redirecrUri;

/*! The authority the application will use to obtain tokens */
@property MSALAuthority *authority;

/*! Enable to return access token with extended lifttime during server outage. */
@property BOOL extendedLifetimeEnabled;

@property(nullable) NSArray<MSALAuthority *> *knownAuthorities;
@property(nullable) NSArray<NSString *> *clientApplicationCapabilities;
@property(nullable) MSALSliceConfig *slice;

@property double tokenExpirationBuffer;

- (nullable instancetype)initWithClientId:(NSString *)clientId NS_DESIGNATED_INITIALIZER;

- (nullable instancetype)initWithClientId:(NSString *)clientId
                              redirectURI:(NSString *)redirectURI;

- (nullable instancetype)init NS_UNAVAILABLE;
+ (nullable instancetype)new NS_UNAVAILABLE;

// Todo: add a init that takes in a config file.

@end

NS_ASSUME_NONNULL_END
