//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ABPhotoBrigeBroswer;

@protocol ABPhotoBrigeBroswerDelegate <NSObject>
- (void)brigeBroswer:(ABPhotoBrigeBroswer *)arg1 willReportAtIndex:(long long)arg2;
- (void)brigeBroswer:(ABPhotoBrigeBroswer *)arg1 willDeleteAtIndex:(long long)arg2;
- (void)brigeBroswer:(ABPhotoBrigeBroswer *)arg1 willShowAtIndex:(long long)arg2;
@end

