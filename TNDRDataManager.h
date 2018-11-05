//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSFetchedResultsControllerDelegate-Protocol.h"

@class NSArray, NSDate, NSFetchedResultsController, NSMutableArray, NSNotificationCenter, NSString, NSTimer, TNDRAnalyticsTracker, TNDRAppDelegate, TNDRAppServiceLevel, TNDRCoreDataService, TNDRCurrentUser, TNDRDeleteOrphanedPhotosOperation, TNDRHTTPClient, TNDRPopularLocationMerger, TNDRTimer, UIApplication;
@protocol TNDRPerformanceTrackerProtocol, TNDRUpdateManagerDelegate;

@interface TNDRDataManager : NSObject <NSFetchedResultsControllerDelegate>
{
    _Bool _changedPreferences;
    _Bool _updatingMatches;
    _Bool _hasUnviewedMatches;
    _Bool _updatingInBackground;
    _Bool _dataManagerTTITrackingDoneForSession;
    _Bool _hasBeenAddedToGroup;
    _Bool _groupHasExpired;
    _Bool _suppressUserRecs;
    _Bool _deletingOrphanedPhotosInProgress;
    _Bool _trimmingUsersInProgress;
    _Bool _trimmingGroupsInProgress;
    _Bool _isDeletingRecommendations;
    NSDate *_openedApplicationDate;
    NSString *_currentChatID;
    id <TNDRUpdateManagerDelegate> _delegate;
    long long _autoIncrementingSequence;
    long long _previousMatchCount;
    NSString *_predicateStringForNewMatches;
    NSString *_predicateStringForUnviewedNewMatches;
    NSString *_predicateStringForMatchesWithMessages;
    NSString *_predicateStringForUnviewedMatchesWithMessages;
    NSTimer *_updatesTimer;
    NSMutableArray *_userPrefetchURLs;
    NSFetchedResultsController *_changedMatchesFetchedResultsController;
    NSFetchedResultsController *_rewindFetchedResultsController;
    NSFetchedResultsController *_rewindGroupsFetchedResultsController;
    NSTimer *_failedChoiceSendTimer;
    TNDRPopularLocationMerger *_popularLocationMerger;
    unsigned long long _backgroundTaskID;
    TNDRDeleteOrphanedPhotosOperation *_deleteOrphanPhotosOp;
    TNDRCoreDataService *_dataService;
    TNDRCurrentUser *_currentUser;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool isDeletingRecommendations; // @synthesize isDeletingRecommendations=_isDeletingRecommendations;
@property(readonly, nonatomic) TNDRCurrentUser *currentUser; // @synthesize currentUser=_currentUser;
@property(readonly, nonatomic) TNDRCoreDataService *dataService; // @synthesize dataService=_dataService;
@property(retain, nonatomic) TNDRDeleteOrphanedPhotosOperation *deleteOrphanPhotosOp; // @synthesize deleteOrphanPhotosOp=_deleteOrphanPhotosOp;
@property(nonatomic) unsigned long long backgroundTaskID; // @synthesize backgroundTaskID=_backgroundTaskID;
@property _Bool trimmingGroupsInProgress; // @synthesize trimmingGroupsInProgress=_trimmingGroupsInProgress;
@property _Bool trimmingUsersInProgress; // @synthesize trimmingUsersInProgress=_trimmingUsersInProgress;
@property _Bool deletingOrphanedPhotosInProgress; // @synthesize deletingOrphanedPhotosInProgress=_deletingOrphanedPhotosInProgress;
@property(nonatomic) _Bool suppressUserRecs; // @synthesize suppressUserRecs=_suppressUserRecs;
@property(retain, nonatomic) TNDRPopularLocationMerger *popularLocationMerger; // @synthesize popularLocationMerger=_popularLocationMerger;
@property(retain, nonatomic) NSTimer *failedChoiceSendTimer; // @synthesize failedChoiceSendTimer=_failedChoiceSendTimer;
@property(retain, nonatomic) NSFetchedResultsController *rewindGroupsFetchedResultsController; // @synthesize rewindGroupsFetchedResultsController=_rewindGroupsFetchedResultsController;
@property(retain, nonatomic) NSFetchedResultsController *rewindFetchedResultsController; // @synthesize rewindFetchedResultsController=_rewindFetchedResultsController;
@property(retain, nonatomic) NSFetchedResultsController *changedMatchesFetchedResultsController; // @synthesize changedMatchesFetchedResultsController=_changedMatchesFetchedResultsController;
@property(retain, nonatomic) NSMutableArray *userPrefetchURLs; // @synthesize userPrefetchURLs=_userPrefetchURLs;
@property(retain, nonatomic) NSTimer *updatesTimer; // @synthesize updatesTimer=_updatesTimer;
@property(nonatomic) _Bool groupHasExpired; // @synthesize groupHasExpired=_groupHasExpired;
@property(nonatomic) _Bool hasBeenAddedToGroup; // @synthesize hasBeenAddedToGroup=_hasBeenAddedToGroup;
@property(readonly, nonatomic) NSString *predicateStringForUnviewedMatchesWithMessages; // @synthesize predicateStringForUnviewedMatchesWithMessages=_predicateStringForUnviewedMatchesWithMessages;
@property(readonly, nonatomic) NSString *predicateStringForMatchesWithMessages; // @synthesize predicateStringForMatchesWithMessages=_predicateStringForMatchesWithMessages;
@property(readonly, nonatomic) NSString *predicateStringForUnviewedNewMatches; // @synthesize predicateStringForUnviewedNewMatches=_predicateStringForUnviewedNewMatches;
@property(readonly, nonatomic) NSString *predicateStringForNewMatches; // @synthesize predicateStringForNewMatches=_predicateStringForNewMatches;
@property(nonatomic) _Bool dataManagerTTITrackingDoneForSession; // @synthesize dataManagerTTITrackingDoneForSession=_dataManagerTTITrackingDoneForSession;
@property(nonatomic, getter=isUpdatingInBackground) _Bool updatingInBackground; // @synthesize updatingInBackground=_updatingInBackground;
@property(nonatomic) long long previousMatchCount; // @synthesize previousMatchCount=_previousMatchCount;
@property(nonatomic) _Bool hasUnviewedMatches; // @synthesize hasUnviewedMatches=_hasUnviewedMatches;
@property long long autoIncrementingSequence; // @synthesize autoIncrementingSequence=_autoIncrementingSequence;
@property(nonatomic, getter=isUpdatingMatches) _Bool updatingMatches; // @synthesize updatingMatches=_updatingMatches;
@property(nonatomic, getter=hasChangedPreferences) _Bool changedPreferences; // @synthesize changedPreferences=_changedPreferences;
@property(nonatomic) __weak id <TNDRUpdateManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *currentChatID; // @synthesize currentChatID=_currentChatID;
@property(retain, nonatomic) NSDate *openedApplicationDate; // @synthesize openedApplicationDate=_openedApplicationDate;
- (void).cxx_destruct;
- (id)matchesForHomeScreenShortcuts;
- (void)trimUnneededGroups;
- (unsigned long long)trimOrphanedRecommendationBatch:(unsigned long long)arg1 inContext:(id)arg2;
- (unsigned long long)trimUnneededUserBatch:(unsigned long long)arg1 inContext:(id)arg2;
- (void)trimUnneededUsers;
- (void)deleteOrphanedPhotos;
- (void)sendFailedRecommendationChoices;
- (void)passRecommendationForUser:(id)arg1;
- (void)likeRecommendationForUser:(id)arg1 isSuperLiked:(_Bool)arg2;
- (CDUnknownBlockType)passCompletionBlockForUser:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (CDUnknownBlockType)likeCompletionBlockForUser:(id)arg1 withSuperLike:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)startFailedRecsSendTimer:(_Bool)arg1;
- (void)clearRewindableRecommendations;
- (void)clearSocialRecommendations;
- (void)clearStaleRecommendationsAndRefresh:(_Bool)arg1 clearAllRecs:(_Bool)arg2;
- (long long)autoIncrementingSequenceForRecs;
- (void)determineAutoIncrementingSequenceForRecs;
- (void)setUpdatingMatches:(_Bool)arg1 withNotification:(_Bool)arg2;
- (void)doUserImagePrefetch;
- (void)queuePrefetchForUser:(id)arg1;
- (void)updateRewindOptions;
- (id)matchObjectInMainThreadContext:(id)arg1;
- (_Bool)isCurrentlyInChat;
- (void)notifyChatListUpdateWithMatches:(id)arg1;
- (void)updateMessageModelAndInAppNotifyWithMessage:(id)arg1 withLikeValue:(_Bool)arg2 withInAppNotification:(_Bool)arg3 messageLikeCreatedAtDate:(id)arg4 likerID:(id)arg5;
- (void)handleLegacyLikeMessageIfNeccessaryWith:(id)arg1 foundMessages:(id)arg2 likeValue:(_Bool)arg3 messageIDToLikeDateCreatedMap:(id)arg4 messageIDToLikerIDMap:(id)arg5;
- (void)updateLikedMessages:(id)arg1;
- (void)updateUnviewedCounts;
- (void)controllerDidChangeContent:(id)arg1;
- (void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5;
- (void)setupChangedFetchedResultsController;
- (_Bool)currentUserBelongsToGroup:(id)arg1;
- (_Bool)mergeSquadUpdates:(id)arg1 inContext:(id)arg2;
- (void)mergeBlockedMatchUpdates:(id)arg1 inContext:(id)arg2;
- (void)synchronizeGroup:(id)arg1 withMembers:(id)arg2 inContext:(id)arg3;
- (_Bool)isGroupMatchAllMembersValid:(id)arg1;
- (id)sortGroupMembersInMatchJSON:(id)arg1;
- (_Bool)mergeMatchUpdates:(id)arg1 inContext:(id)arg2;
- (long long)saveGroupRecommendation:(id)arg1 inContext:(id)arg2;
- (long long)saveUserRecommendation:(id)arg1 inGroup:(id)arg2 groupMemberType:(long long)arg3 isGroupMatched:(_Bool)arg4 inContext:(id)arg5;
- (long long)classifyRecommendationUpdates:(id)arg1 inContext:(id)arg2;
- (_Bool)isEqualToString:(id)arg1;
- (id)currentCountryCode;
- (long long)countPopularLocations;
- (void)performPopularLocationsUpdateCompletion:(CDUnknownBlockType)arg1;
- (void)updatePopularLocationsWithCompletion:(CDUnknownBlockType)arg1;
- (void)removeMomentLikeMessages;
- (void)cleanupDeletePhotosBackgroundTask;
- (void)cleanupDeletePhotosOperation;
- (void)handleAppWillForeground:(id)arg1;
- (void)handleAppWillBackground:(id)arg1;
- (void)handleUserSync:(id)arg1;
- (void)handleGroupChange:(id)arg1;
- (void)handleDidResetCurrentUser:(id)arg1;
- (void)handleWillResetCurrentUser:(id)arg1;
- (void)registerForNotifications;
- (id)matchesWithMissingUserData;
- (void)createUpdatesMergeOperationWithJSON:(id)arg1 updatesModDateString:(id)arg2 isLastUpdateChunk:(_Bool)arg3;
- (id)copyOfUpdatesJSONForFinalChunk:(id)arg1 originalUpdatesJSON:(id)arg2;
- (void)saveRetrievedMatchUpdatesToPersistentStore:(id)arg1 updatesModDateString:(id)arg2;
- (void)verifyAndProcessJSONIfNecessary:(id)arg1 requestSuccessful:(_Bool)arg2;
- (void)updateUserPhotos;
- (void)updateMatches;
- (void)sendNotificationRecsDone:(_Bool)arg1;
- (void)postNotificationForUpdatedUserReferrer;
- (void)navigateToRecommendedUser;
- (void)updateUserWithID:(id)arg1 userJSON:(id)arg2 referrerWithID:(id)arg3 referrerJSON:(id)arg4 referralString:(id)arg5;
- (void)invalidateUpdatesTimer;
- (void)startUpdatesTimer;
- (void)doDataUpdates:(_Bool)arg1;
- (void)performPostAuthProcesses;
- (_Bool)canRewindGroups;
- (_Bool)canRewindUsers;
@property(readonly, nonatomic) NSArray *rewindableGroups;
@property(readonly, nonatomic) NSArray *rewindableUsers;
- (void)removePreviousRewindableUsersWithCurrentUserReset:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setupRewindFetchedResultsControllerWithCurrentUserReset:(_Bool)arg1;
- (void)setupRewindFetchedResultsController;
- (void)setupPrefetch;
- (void)resetDataService;
- (void)setup;
@property(readonly, nonatomic) TNDRAppDelegate *appDelegate;
@property(readonly, nonatomic) UIApplication *application;
- (id)imageManager;
- (id)urlManager;
@property(readonly, nonatomic) TNDRHTTPClient *httpClient;
@property(readonly, nonatomic) TNDRAnalyticsTracker *analyticsTracker;
@property(readonly, nonatomic) TNDRTimer *timer;
- (void)dealloc;
- (id)initWithDataService:(id)arg1 currentUser:(id)arg2;
@property(readonly, nonatomic) id <TNDRPerformanceTrackerProtocol> performanceTracker;
@property(readonly, nonatomic) NSNotificationCenter *notificationCenter;
- (id)environmentHelper;
@property(readonly, nonatomic) TNDRAppServiceLevel *appServiceLevel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
