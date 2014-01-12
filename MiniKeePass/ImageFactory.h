/*
 * Copyright 2011-2013 Jason Rush and John Flanagan. All rights reserved.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#import <Foundation/Foundation.h>
#import "Kdb.h"
#import "Kdb4Node.h"

@interface KdbImage : NSObject

@property (nonatomic, strong) UIImage *image;
@property (nonatomic, assign) NSUInteger index;
@property (nonatomic, strong) UUID *uuid;

+ (KdbImage *)kdbImageWithImage:(UIImage *)image andIndex:(NSUInteger)index;
+ (KdbImage *)kdbImageWithImage:(UIImage *)image andUuid:(UUID *)uuid;
+ (KdbImage *)kdbImageForEntry:(KdbEntry *)entry;
+ (KdbImage *)kdbImageForGroup:(KdbGroup *)group;

@end

@interface ImageFactory : NSObject

+ (ImageFactory *)sharedInstance;

- (NSArray *)kdbImages;
- (UIImage *)imageForGroup:(KdbGroup *)group;
- (UIImage *)imageForEntry:(KdbEntry *)entry;
- (UIImage *)imageForUuid:(UUID *)uuid;
- (UIImage *)imageForIndex:(NSUInteger)index;

@end
