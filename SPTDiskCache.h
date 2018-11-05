//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTDiskCaching-Protocol.h"

@class NSFileHandle, NSMutableDictionary, NSString;

@interface SPTDiskCache : NSObject <SPTDiskCaching>
{
    unsigned long long _capacity;
    NSString *_cacheDirectory;
    NSString *_currentID;
    NSFileHandle *_fileHandle;
    NSMutableDictionary *_resources;
}

@property(retain, nonatomic) NSMutableDictionary *resources; // @synthesize resources=_resources;
@property(retain, nonatomic) NSFileHandle *fileHandle; // @synthesize fileHandle=_fileHandle;
@property(retain, nonatomic) NSString *currentID; // @synthesize currentID=_currentID;
@property(retain, nonatomic) NSString *cacheDirectory; // @synthesize cacheDirectory=_cacheDirectory;
@property(readonly, nonatomic) unsigned long long capacity; // @synthesize capacity=_capacity;
- (void).cxx_destruct;
- (_Bool)writeCacheData:(id)arg1;
- (id)readCacheDataWithURI:(id)arg1 itemID:(id)arg2 length:(unsigned long long)arg3 offset:(unsigned long long)arg4;
- (id)resourceForURI:(id)arg1 itemID:(id)arg2 totalSize:(unsigned long long)arg3 createIfNotExists:(_Bool)arg4;
- (unsigned long long)size;
- (_Bool)clear:(id *)arg1;
- (_Bool)evict:(id *)arg1;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

