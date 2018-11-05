//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TNDRThemeSongProtocol-Protocol.h"
#import "UITableViewDataSource-Protocol.h"

@class NSArray, NSString, NSURLSessionDataTask, TNDRHTTPSpotifyClient;
@protocol TNDRSpotifyAPIModelDelegate;

@interface TNDRThemeSongSearchViewModel : NSObject <UITableViewDataSource, TNDRThemeSongProtocol>
{
    id <TNDRSpotifyAPIModelDelegate> _delegate;
    NSArray *_searchResultTracks;
    NSURLSessionDataTask *_inFlightDataTask;
    NSString *_queryString;
    TNDRHTTPSpotifyClient *_spotifyClient;
}

@property(readonly, nonatomic) TNDRHTTPSpotifyClient *spotifyClient; // @synthesize spotifyClient=_spotifyClient;
@property(copy, nonatomic) NSString *queryString; // @synthesize queryString=_queryString;
@property(retain, nonatomic) NSURLSessionDataTask *inFlightDataTask; // @synthesize inFlightDataTask=_inFlightDataTask;
@property(copy, nonatomic) NSArray *searchResultTracks; // @synthesize searchResultTracks=_searchResultTracks;
@property(nonatomic) __weak id <TNDRSpotifyAPIModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)trackAtIndex:(long long)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)performThemeSongSearch;
- (void)searchWithQueryString:(id)arg1;
- (void)parseJSONDataIntoTracks:(id)arg1;
- (id)init;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

