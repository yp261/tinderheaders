//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class TNDRMatchCell, TNDRMatchesMessagesViewModel;

@protocol TNDRMatchesMessagesRowActionDelegate <NSObject>
- (void)viewModel:(TNDRMatchesMessagesViewModel *)arg1 didTapRowActionWithType:(long long)arg2 forCell:(TNDRMatchCell *)arg3;
- (void)viewModel:(TNDRMatchesMessagesViewModel *)arg1 didChangeRowActionState:(_Bool)arg2 forCell:(TNDRMatchCell *)arg3;
- (void)viewModel:(TNDRMatchesMessagesViewModel *)arg1 didFinishRowActionOnMatchCell:(TNDRMatchCell *)arg2;
- (void)viewModel:(TNDRMatchesMessagesViewModel *)arg1 didStartRowActionOnMatchCell:(TNDRMatchCell *)arg2;
@end

