//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray;

@interface HPersonalAppGroupView : UIView
{
    _Bool _hasLogo;
    double _groupHeight;
    NSMutableArray *_appItemViews;
}

@property(retain, nonatomic) NSMutableArray *appItemViews; // @synthesize appItemViews=_appItemViews;
@property(nonatomic) _Bool hasLogo; // @synthesize hasLogo=_hasLogo;
@property(nonatomic) double groupHeight; // @synthesize groupHeight=_groupHeight;
- (void).cxx_destruct;
- (void)reloadWithExtraInfo:(id)arg1;
- (id)getItemInfo:(id)arg1;
- (id)initWithY:(double)arg1 withAppList:(id)arg2 andExtraInfo:(id)arg3 hasLogo:(_Bool)arg4;

@end
