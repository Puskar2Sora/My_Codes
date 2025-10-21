import pygame
import sys

# Initialize Pygame
pygame.init()

# Set up the game window
WIDTH, HEIGHT = 800, 600
WIN = pygame.display.set_mode((WIDTH, HEIGHT))
pygame.display.set_caption("Mini Football Frenzy")

# Set up clock for managing the frame rate
FPS = 60
clock = pygame.time.Clock()

# Define Colors
WHITE = (255, 255, 255)
BLACK = (0, 0, 0)
GREEN = (0, 255, 0)
RED = (255, 0, 0)

# Player and Ball Dimensions
PLAYER_WIDTH, PLAYER_HEIGHT = 20, 80
BALL_RADIUS = 15

# Score
player1_score = 0
player2_score = 0

# Fonts
font = pygame.font.Font(None, 74)

# Player Class
class Player:
    def _init_(self, x, y, color):
        self.rect = pygame.Rect(x, y, PLAYER_WIDTH, PLAYER_HEIGHT)
        self.color = color
        self.speed = 5

    def draw(self, win):
        pygame.draw.rect(win, self.color, self.rect)

    def move(self, keys, up, down, left, right):
        if keys[up] and self.rect.top > 0:
            self.rect.y -= self.speed
        if keys[down] and self.rect.bottom < HEIGHT:
            self.rect.y += self.speed
        if keys[left] and self.rect.left > 0:
            self.rect.x -= self.speed
        if keys[right] and self.rect.right < WIDTH:
            self.rect.x += self.speed


# Ball Class
class Ball:
    def _init_(self, x, y, color):
        self.rect = pygame.Rect(x - BALL_RADIUS, y - BALL_RADIUS, BALL_RADIUS * 2, BALL_RADIUS * 2)
        self.color = color
        self.velocity = [4, 4]

    def draw(self, win):
        pygame.draw.ellipse(win, self.color, self.rect)

    def move(self):
        self.rect.x += self.velocity[0]
        self.rect.y += self.velocity[1]

        # Ball bounces off the walls
        if self.rect.top <= 0 or self.rect.bottom >= HEIGHT:
            self.velocity[1] *= -1
        if self.rect.left <= 0 or self.rect.right >= WIDTH:
            self.velocity[0] *= -1

# Score Display
def draw_score(win, player1_score, player2_score):
    score_text = font.render(f"{player1_score} - {player2_score}", True, WHITE)
    win.blit(score_text, (WIDTH//2 - score_text.get_width()//2, 10))

# Main Game Loop
def main():
    global player1_score, player2_score

    run = True
    player1 = Player(50, HEIGHT//2 - PLAYER_HEIGHT//2, GREEN)
    player2 = Player(WIDTH - 70, HEIGHT//2 - PLAYER_HEIGHT//2, RED)
    ball = Ball(WIDTH//2, HEIGHT//2, WHITE)

    while run:
        clock.tick(FPS)
        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                run = False
                pygame.quit()
                sys.exit()

        keys = pygame.key.get_pressed()
        player1.move(keys, pygame.K_w, pygame.K_s, pygame.K_a, pygame.K_d)
        player2.move(keys, pygame.K_UP, pygame.K_DOWN, pygame.K_LEFT, pygame.K_RIGHT)
        ball.move()

        # Ball collision with players
        if ball.rect.colliderect(player1.rect) or ball.rect.colliderect(player2.rect):
            ball.velocity[0] *= -1

        # Goal detection
        if ball.rect.left <= 0:
            player2_score += 1
            ball.rect.center = (WIDTH // 2, HEIGHT // 2)
        if ball.rect.right >= WIDTH:
            player1_score += 1
            ball.rect.center = (WIDTH // 2, HEIGHT // 2)

        # Render the game
        WIN.fill(BLACK)
        player1.draw(WIN)
        player2.draw(WIN)
        ball.draw(WIN)
        draw_score(WIN, player1_score, player2_score)

        pygame.display.update()

if __name__ == "_main_":
    main()