//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SPTSearch : NSObject
{
}

+ (id)createRequestForSearchWithQuery:(id)arg1 queryType:(unsigned long long)arg2 accessToken:(id)arg3 error:(id *)arg4;
+ (void)performSearchWithQuery:(id)arg1 queryType:(unsigned long long)arg2 accessToken:(id)arg3 callback:(CDUnknownBlockType)arg4;
+ (id)createRequestForSearchWithQuery:(id)arg1 queryType:(unsigned long long)arg2 offset:(long long)arg3 accessToken:(id)arg4 error:(id *)arg5;
+ (void)performSearchWithQuery:(id)arg1 queryType:(unsigned long long)arg2 offset:(long long)arg3 accessToken:(id)arg4 callback:(CDUnknownBlockType)arg5;
+ (id)createRequestForSearchWithQuery:(id)arg1 queryType:(unsigned long long)arg2 accessToken:(id)arg3 market:(id)arg4 error:(id *)arg5;
+ (void)performSearchWithQuery:(id)arg1 queryType:(unsigned long long)arg2 accessToken:(id)arg3 market:(id)arg4 callback:(CDUnknownBlockType)arg5;
+ (id)createRequestForSearchWithQuery:(id)arg1 queryType:(unsigned long long)arg2 offset:(long long)arg3 accessToken:(id)arg4 market:(id)arg5 error:(id *)arg6;
+ (void)performSearchWithQuery:(id)arg1 queryType:(unsigned long long)arg2 offset:(long long)arg3 accessToken:(id)arg4 market:(id)arg5 callback:(CDUnknownBlockType)arg6;
+ (id)searchResultsFromData:(id)arg1 withResponse:(id)arg2 queryType:(unsigned long long)arg3 error:(id *)arg4;
+ (id)searchResultsFromDecodedJSON:(id)arg1 queryType:(unsigned long long)arg2 error:(id *)arg3;
+ (id)rootObjectNameFromSearchQueryType:(unsigned long long)arg1;
+ (id)typeNameFromSearchQueryType:(unsigned long long)arg1;

@end

