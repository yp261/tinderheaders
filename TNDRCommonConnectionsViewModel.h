//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TNDRThumbnailViewModel.h"

@class NSArray;

@interface TNDRCommonConnectionsViewModel : TNDRThumbnailViewModel
{
    _Bool _currentUser;
    long long _currentUserConnectionCount;
    long long _firstDegreesCount;
    long long _secondDegreesCount;
    long long _thirdDegreesCount;
    NSArray *_connectionsArray;
}

@property(retain, nonatomic) NSArray *connectionsArray; // @synthesize connectionsArray=_connectionsArray;
@property(readonly, nonatomic) long long thirdDegreesCount; // @synthesize thirdDegreesCount=_thirdDegreesCount;
@property(readonly, nonatomic) long long secondDegreesCount; // @synthesize secondDegreesCount=_secondDegreesCount;
@property(readonly, nonatomic) long long firstDegreesCount; // @synthesize firstDegreesCount=_firstDegreesCount;
@property(nonatomic) long long currentUserConnectionCount; // @synthesize currentUserConnectionCount=_currentUserConnectionCount;
@property(nonatomic, getter=isCurrentUser) _Bool currentUser; // @synthesize currentUser=_currentUser;
- (void).cxx_destruct;
- (id)sortedArrayFromJSON:(id)arg1;
- (_Bool)isJSONFullyValidData:(id)arg1;
- (void)parseDataFromJSON:(id)arg1;
- (id)connectionDataForIndexPath:(id)arg1;
@property(readonly, nonatomic) long long count;
- (id)initWithTNDRUser:(id)arg1;

@end

