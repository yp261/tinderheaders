//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UITableViewDataSource-Protocol.h"

@class NSArray, NSMutableSet, NSString;
@protocol TNDRGroupCreateModelDelegate;

@interface TNDRGroupCreateVM : NSObject <UITableViewDataSource>
{
    _Bool _waitingToLoadFriends;
    _Bool _currentlySearching;
    _Bool _didSelectFirstFriend;
    id <TNDRGroupCreateModelDelegate> _delegate;
    NSMutableSet *_selectedFriends;
    NSArray *_friendsAvailable;
    NSArray *_parsedFriendsAvailable;
}

@property(nonatomic) _Bool didSelectFirstFriend; // @synthesize didSelectFirstFriend=_didSelectFirstFriend;
@property(retain, nonatomic) NSArray *parsedFriendsAvailable; // @synthesize parsedFriendsAvailable=_parsedFriendsAvailable;
@property(retain, nonatomic) NSArray *friendsAvailable; // @synthesize friendsAvailable=_friendsAvailable;
@property(nonatomic, getter=isCurrentlySearching) _Bool currentlySearching; // @synthesize currentlySearching=_currentlySearching;
@property(retain, nonatomic) NSMutableSet *selectedFriends; // @synthesize selectedFriends=_selectedFriends;
@property(nonatomic) __weak id <TNDRGroupCreateModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isWaitingToLoadFriends) _Bool waitingToLoadFriends; // @synthesize waitingToLoadFriends=_waitingToLoadFriends;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
@property(readonly, nonatomic) NSString *initialGroupStatus;
@property(readonly, nonatomic) _Bool hasNoFriends;
@property(readonly, nonatomic) NSArray *memberIDsForGroupCreation;
- (void)performSearchWithText:(id)arg1;
- (void)deselectFriend:(id)arg1;
- (_Bool)isFriendSelectedAtIndexPath:(id)arg1;
- (_Bool)selectFriendAtIndexPath:(id)arg1;
- (_Bool)canSelectMoreFriends;
- (id)friendObjectForMyself;
- (id)friendAtIndexPath:(id)arg1;
- (void)parseJSONDataIntoFriends:(id)arg1;
- (void)refreshServerFriendData;
- (void)setup;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

