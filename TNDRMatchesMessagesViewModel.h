//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TNDRMatchCellRowActionGestureDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"

@class NSFetchedResultsController, NSString, TNDRCoreDataService, TNDRCurrentUser, TNDRReportInteractor;
@protocol NSFetchedResultsControllerDelegate, TNDRMatchesMessagesRowActionDelegate;

@interface TNDRMatchesMessagesViewModel : NSObject <TNDRMatchCellRowActionGestureDelegate, UITableViewDataSource>
{
    _Bool _shouldStartRowAction;
    id <NSFetchedResultsControllerDelegate> _fetchedResultsControllerDelegate;
    NSFetchedResultsController *_fetchedResultsController;
    id <TNDRMatchesMessagesRowActionDelegate> _delegate;
    TNDRCurrentUser *_currentUser;
    TNDRReportInteractor *_reportInteractor;
}

+ (id)basePredicateString;
@property(nonatomic) _Bool shouldStartRowAction; // @synthesize shouldStartRowAction=_shouldStartRowAction;
@property(readonly, nonatomic) TNDRReportInteractor *reportInteractor; // @synthesize reportInteractor=_reportInteractor;
@property(retain, nonatomic) TNDRCurrentUser *currentUser; // @synthesize currentUser=_currentUser;
@property(nonatomic) __weak id <TNDRMatchesMessagesRowActionDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSFetchedResultsController *fetchedResultsController; // @synthesize fetchedResultsController=_fetchedResultsController;
@property(nonatomic) __weak id <NSFetchedResultsControllerDelegate> fetchedResultsControllerDelegate; // @synthesize fetchedResultsControllerDelegate=_fetchedResultsControllerDelegate;
- (void).cxx_destruct;
- (void)cell:(id)arg1 didChangeRowActionStateToExpanded:(_Bool)arg2;
- (void)cell:(id)arg1 didTapOnRowActionWithType:(long long)arg2;
- (_Bool)cellShouldStartRowActionGesture:(id)arg1;
- (void)cellDidFinishRowActionGesture:(id)arg1;
- (void)cellDidStartRowActionGesture:(id)arg1;
- (void)updateMatchCellTextWithMatchDate:(id)arg1 match:(id)arg2;
- (void)updateMatchCellText:(id)arg1 match:(id)arg2;
- (id)sortDescriptors;
- (_Bool)filterMatchesForSearchText:(id)arg1;
- (void)configureCell:(id)arg1 atIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)matchForIndexPath:(id)arg1;
- (long long)unviewedMatchCountWithOrWithoutMessagesForGender:(int)arg1;
- (long long)unviewedMatchCount;
- (id)allMatches;
- (long long)matchCount;
- (void)handleWillClearUserInformationNotification:(id)arg1;
- (void)unregisterNotifications;
- (void)registerNotifications;
- (id)matchesWithNonNilUserPredicate;
- (void)setupMatchesDataWithDelegate:(id)arg1;
- (void)dealloc;
- (void)setupWithDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1;
@property(readonly, nonatomic) TNDRCoreDataService *dataService;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

