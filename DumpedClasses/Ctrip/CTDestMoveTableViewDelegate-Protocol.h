//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"
#import "UITableViewDelegate.h"

@class CTDestMoveTableView, NSIndexPath, UIView;

@protocol CTDestMoveTableViewDelegate <NSObject, UITableViewDelegate>

@optional
- (void)moveTableClick:(CTDestMoveTableView *)arg1;
- (void)moveTableViewFinish:(CTDestMoveTableView *)arg1;
- (struct CGPoint)moveTable:(CTDestMoveTableView *)arg1 destinationPointOfView:(UIView *)arg2 snapshotAnchorPoint:(struct CGPoint)arg3;
- (void)moveTableView:(CTDestMoveTableView *)arg1 snapshotOfMovingCell:(UIView *)arg2 snapshotAnchorPoint:(struct CGPoint)arg3 moveInTableView:(_Bool)arg4;
- (void)moveTableView:(CTDestMoveTableView *)arg1 willMoveRowAtIndexPath:(NSIndexPath *)arg2;
- (NSIndexPath *)moveTableView:(CTDestMoveTableView *)arg1 targetIndexPathForMoveFromRowAtIndexPath:(NSIndexPath *)arg2 toProposedIndexPath:(NSIndexPath *)arg3;
@end
