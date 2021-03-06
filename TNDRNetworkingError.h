//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSString, TNDRAlertContext;

@interface TNDRNetworkingError : NSObject
{
    NSError *_error;
    long long _statusCode;
}

@property(nonatomic) long long statusCode; // @synthesize statusCode=_statusCode;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *errorAlertMessageWithTitle;
@property(readonly, copy, nonatomic) TNDRAlertContext *errorAlertContext;
@property(readonly, copy, nonatomic) NSString *errorMessage;
@property(readonly, copy, nonatomic) NSString *errorTitle;
@property(readonly, nonatomic) long long errorCode;
- (id)initWithError:(id)arg1 andStatusCode:(long long)arg2;

@end

