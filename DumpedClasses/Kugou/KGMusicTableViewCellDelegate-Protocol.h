//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class KGMusicTableViewCell;

@protocol KGMusicTableViewCellDelegate <NSObject>
- (void)addMusicBtnActionWithMusicTableCell:(KGMusicTableViewCell *)arg1 point:(struct CGPoint)arg2;
- (void)checkBoxActionWithMusicTableCell:(KGMusicTableViewCell *)arg1;
- (void)menuActionWithMusicTableCell:(KGMusicTableViewCell *)arg1;
@end
