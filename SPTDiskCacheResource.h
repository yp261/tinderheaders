//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSFileHandle, NSString;

@interface SPTDiskCacheResource : NSObject
{
    CDStruct_498141cc *_header;
    NSString *_itemID;
    NSFileHandle *_fileHandle;
}

@property(retain, nonatomic) NSFileHandle *fileHandle; // @synthesize fileHandle=_fileHandle;
@property(retain, nonatomic) NSString *itemID; // @synthesize itemID=_itemID;
@property(nonatomic) CDStruct_498141cc *header; // @synthesize header=_header;
- (void).cxx_destruct;
- (void)setHasBlockForOffset:(unsigned long long)arg1;
- (_Bool)hasBlockForOffset:(unsigned long long)arg1;
- (void)writeHeader;
- (void)readHeader;
- (void)dealloc;
- (id)init;

@end

