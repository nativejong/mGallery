//
//  CGalleryImg.h
//  Quantum
//
//  Created by John Blaine on 5/15/19.
//  Copyright © 2019 John W. Blaine. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface mGalleryImg : UIView
@property (nonatomic, retain) UIImageView *img;

- (id)initWithFrame:(CGRect)frame bg:(UIColor*)c;
- (void)addImage:(UIImage*)r;

@end

NS_ASSUME_NONNULL_END
